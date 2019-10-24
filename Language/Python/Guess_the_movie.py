#simple game that guesses the movie

import random

movies = ['the prestige','harry potter','shawshank','avengers','inception','django unchained','war dogs','hangover','the notebook','incredibles']

def play():
    p1name = input("Please! Enter your name,Player 1")
    p2name = input("Please! Enter your name,Player 2")
    p1 = 0
    p2 = 0
    turn = 0
    willing = True
    while willing:
        if turn%2==0:
            #player 1
            print(p1name,"Your Turn")
            picked_movie = Random.choice(movies)
            ques = create_question(picked)
            print(ques)

            not_said = True
            while not_said:
                letter = input("Your Letter:")
                if(is_letter(letter,picked_movie)):
                    #unlock
                else:
                    print(letter,"Not found")
        else:
            turn = turn + 1


