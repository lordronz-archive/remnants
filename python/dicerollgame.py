import random

def SumofThreeDice():
    total = 0
    for i in range(3):
        total += random.randint(1, 6)
    return total

def CheckYourGuess(guess, sum1, sum2):
    if guess == 'l':
        if sum1 > sum2:
            greet = 'Good Job ! :)'
        else:
            greet = 'You suck ! :('
    if guess == 'h':
        if sum1 < sum2:
            greet = 'Good Job ! :)'
        else:
            greet = 'You suck ! :('
    if guess == 's':
        if sum1 == sum2:
            greet = 'Good Job ! :)'
        else:
            greet = 'You suck ! :('
    return greet

print('\t-----GUESS THE DICE-----\n')
while True:
    while True:
        usrinput = input('Press enter to roll three dice')
        if usrinput == '':
            break
    sum1 = SumofThreeDice()
    print(f'The sum of three dice is {sum1}')
    print('''Now, guess the next roll, is it going to be higher, lower or same!
(Input l for lower, h for higher, s for same)''')
    while True:
        guess = input()
        guess = guess.lower()
        if guess == 'l' or guess == 'h' or guess == 's':
            break
    sum2 = SumofThreeDice()
    print(f'Next roll, the sum of three dice is {sum2}')
    print(CheckYourGuess(guess, sum1, sum2))
    while True:
        playagain = input('Do you want to play again(y/n) : ')
        playagain = playagain.lower()
        if playagain == 'y' or playagain == 'n':
            break
    if playagain == 'n':
        print('\t-----THANKS FOR PLAYING-----')
        break
