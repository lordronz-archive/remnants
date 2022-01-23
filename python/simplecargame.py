game_help = 'help'
start = 'start'
stop = 'stop'
game_quit = 'quit'
started = False
while True:
    user_input = input('> ')
    if user_input.lower() == game_help:
        print(f"""
{start} - to start the car
{stop} - to stop the car
{game_quit} - to exit
        """)
    elif user_input.lower() == start:
        if not started:#means started is false
            print('Car started...Ready to go!')
            started = True
        else:
            print('Hey, the Car is already started, what are you doing??')
    elif user_input.lower() == stop:
        if started:#means started is true
            print('Car stopped.')
            started = False
        else:
            print('Hey, the Car is already stopped, what are you doing??')
    elif user_input.lower() == game_quit:
        break
    else:
        print("I don't understand that")
    
