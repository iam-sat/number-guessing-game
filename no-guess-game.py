import random
r=random.randint(1,100)
print("***************WELCOME***************")
print("*********NUMBER GUESSING GAME*********")
attempts=1 
while True :
    guess=int(input("GUESS A NUMBER: "))
    if guess>r:
        print("Wrong guess, try something smaller")
    elif guess<r:
        print("Wrong guess, try something bigger")
    else :
        print("Congrats you guessed it right")
    attempts+=1 
