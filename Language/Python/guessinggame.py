from random import random

answer = random()


print("Please guess a number between 1 and 10: ")
guess = int(input())  # This makes it where there is a space for the person to write on the next line

if guess == answer:
    print("You got it on your first try!")
else:
    if guess < answer:
        print("Maybe you should guess higher.")
    else:  # guess must be greater than answer
        print("Why don't you try a lower guess? ")
    guess = int(input())
    if guess == answer:
        print("Great job! You guessed the right number!")
    else:
        print("Sorry! You guessed the wrong number again. That's too bad! I loved your guesses.")
        
