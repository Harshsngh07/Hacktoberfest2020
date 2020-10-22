#simple game that guesses the movie

import random
import sys

movies = ['the prestige','harry potter','shawshank','avengers','inception','django unchained','war dogs','hangover','the notebook','incredibles']

def create_question(movie):
    n = len(movie)
    letters = list(movie)
    temp = []
    for i in range(0, n):
        if letters[i] == " ":
            temp.append(" ")
        else:
            temp.append("*")
    qn = "".join(str(x) for x in temp)
    return qn

def play():
    p1name = input("Please! Enter your name,Player 1 ")
    p2name = input("Please! Enter your name,Player 2 ")
    p1 = 0
    p2 = 0
    turn = 0
    guesses=""
    willing = True
    while willing:
        if turn%2==0:
            #player 1
            print(p1name,"Your Turn")
            picked_movie = random.choice(movies)
            ques = create_question(picked_movie)
            print(ques)

            not_said = True
            while not_said:
                letter = input("Your Letter:")
                if letter in picked_movie:
                    print("movie contains this letter")
                    if letter not in guesses:
                        guesses=guesses+letter
                    #check if letters and picked_movie are anagrams
                    if(sorted(guesses)== sorted(picked_movie)): 
                        print("You win!")
                        print("Movie was " + (picked_movie))
                        sys.exit()
                else:
                    print(letter,"Not found")
                    
                
                
        else:
            turn = turn + 1

#calling the function
play()



