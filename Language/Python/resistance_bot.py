### This is a bot to play the Resistance game (social deduction game)
### To run the game framework, please find the framework here: https://github.com/aigamedev/resistance
### This bot does reasonably well even against intermediate level bots.


from player import Bot
from game import State
import random
import operator

class rv19514(Bot):
    def onGameRevealed(self, players, spies):
        """This function will be called to list all the players, and if you're
        a spy, the spies too -- including others and yourself.
        @param players  List of all players in the game including you.
        @param spies    List of players that are spies, or an empty list.
        """

        global suspected
        global sabotage_count

        sabotage_count = 0
        suspected = {}
        for i in players:
            suspected.update({i: 20.0})

        #SPY INFO ------------If i am a spy---------------
        self.spies = spies #List of all spies in the game
        self.other_spies = [s for s in spies if s.index!=self.index] #list of spies other than me
        self.res = [r for r in players if r not in spies] #list of resistance players

        #Res info------------------if i am resistance------------
        self.players = players
        self.other_players = [s for s in players if s.index!=self.index]


    def onMissionAttempt(self, mission, tries, leader):
        """Callback function when a new turn begins, before the
        players are selected.
        @param mission  Integer representing the mission number (1..5).
        @param tries    Integer count for its number of tries (1..5).
        @param leader   A Player representing who's in charge.
        """
        pass

    def select(self, players, count):

        ##############BUGGGGGGGGGGGGGGGGGGGGGGGGG##############

        """Pick a sub-group of players to go on the next mission.
        @param players  The list of all players in the game to pick from.
        @param count    The number of players you must now select.
        @return list    The players selected for the upcoming mission.
        """
        global suspected

        if self.spy:
            return random.sample(self.spies, 1) + random.sample(self.res, count-1)

        else:
            if self.game.turn==1:
                return [self] + random.sample(self.other_players, count-1)

            least = self.other_players[0]
            second_least = self.other_players[1]

            for player in suspected:
                if str(self.name)  in str(player):
                    continue
                if suspected[player] < suspected[least]:
                    least = player
                    continue
                if (suspected[player] <= suspected[second_least] and player is not least) or least == second_least:
                    second_least = player
            team = [least, second_least]

            if count==2:
                return [self] + [team[0]]
            else:
                return [self] + team


    def onTeamSelected(self, leader, team):
        """Called immediately after the team is selected to go on a mission,
        and before the voting happens.
        @param leader   The leader in charge for this mission.
        @param team     The team that was selected by the current leader.
        """
        self.say("Mission %d team: %s" % (self.game.turn, team))
        self.leader = leader
        self.team = team

    def vote(self, team):
        """Given a selected team, decide whether the mission should proceed.
        @param team      List of players with index and name.
        @return bool     Answer Yes/No.
        """
        #if last mission, vote constantly
        #if spy then vote false, if resistance vote True
        if self.game.tries == 5:
            return not self.spy

        # spies vote for any mission with 1 or more spies in it
        if self.spy:
            return len([p for p in self.game.team if p in self.spies]) > 0

        #if i'm not in team and its a team of 3, vote false
        if len(self.game.team)==3 and not self in self.game.team:
            return False
        return True

    def onVoteComplete(self, votes):
        """Callback once the whole team has voted.
        @param votes        Boolean votes for each player (ordered).
        """
        pass

    def sabotage(self):
        """Decide what to do on the mission once it has been approved.  This
        function is only called if you're a spy, otherwise you have no choice.
        @return bool        Yes to shoot down a mission.
        """
        return True

    def onMissionComplete(self, sabotaged):
        global sabotage_count
        if sabotaged > 0:
            self.say("You're all spies!!")
            sabotage_count = sabotaged

    def onMissionFailed(self, leader, team):
        """Callback once a vote did not reach majority, failing the mission.
        @param leader       The player responsible for selection.
        @param team         The list of players chosen for the mission.
        """
        pass

    def announce(self):

        global sabotage_count
        global suspected

        if(sabotage_count!=0):
            self.say(str(sabotage_count) + "Sabotages")

            #Go through all team members
            for player in self.game.team:


                if player == self:
                    continue
                    #Ignore self

                #if i was part of team, check team closely and mark spy
                if self in self.game.team:
                    #if only 1 sabotage and only 2 team members, decalre other spy
                    if(len(self.game.team)==2):
                        suspected[player] += 20.0
                        self.say(str(suspected[player]) + "is definitely a spy")

                    else:
                        #if team size was more
                        if sabotage_count==2:
                            suspected[player] += 20.0
                            self.say(str(suspected[player]) + "is definitely a spy")
                        else:
                            suspected[player] += 5.0
                else:
                    #i wasn;t part of the team
                    if len(self.game.team)==2:

                        #it could happen with bots
                        if sabotage_count==2:
                            suspected[player] += 20.0
                            self.say(str(suspected[player]) + "is definitely a spy")

                        else:
                            suspected[player] += 5.0

                    else:
                        #if out of 3 memebrs, 2 sabotages happen, chance of spy is much higher
                        if(sabotage_count==2):
                            suspected[player] += 25.0
                        else:
                            #if less than 2 sabotages, then spy chance is less but still there.so less than regular amount of 25
                            suspected[player] += 2.0

            for x, y in suspected.items():
                self.say(str(x) + "has spy score of" + str(y))

        else:
            #no sabotages yay

            for player in self.game.team:
                if player==self:
                    continue

                suspected[player] -= 1.0

        self.say(suspected)
        return suspected

    def onGameComplete(self, win, spies):
        """Callback once the game is complete, and everything is revealed.
        @param win          Boolean true if the Resistance won.
        @param spies        List of only the spies in the game.
        """
        pass
