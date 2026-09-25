import random

def NOT(a):
    if 1 <= a <=5:
        return 1
    else:
        print("invalid choice")
        return 0

def game():
    score=0
    guess = random.randint(1,5)
    a=int(input("Enter your guess: "))
    while NOT(a)==0:
        a=int(input("Enter a valid choice between 1 and 5"))    
    print(f"Your guess is: {a}")
    print(f"Computer chose: {guess}")
    
    while a==guess:
        score+=1
        print(f"Your score is: {score}")
        guess = random.randint(1,5)
        a=int(input("Enter your guess: "))
        while NOT(a)==0:
            a=int(input("Enter a valid choice between 1 and 5"))
        print(f"Your guess is: {a}")
        print(f"Computer chose: {guess}")
        
    else:
        print("Your Guess is not same as what Computer chose, Hence: ")
        print("Game over: ")
        print(f"Your score is {score}")

    with open("ch9/Highscore.txt") as f:
        Highscore=f.readline()
        print(f"Previous high score was {Highscore}")
    if Highscore=="":
        Highscore="0"
    if score>int(Highscore):
        with open("ch9/Highscore.txt","w") as f:
            f.write(str(score))

    return score

game()
#print(t)