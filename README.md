# Monty-Hall-Simulation
This program simulates the monty hall problem. More info can be found [HERE](https://en.wikipedia.org/wiki/Monty_Hall_problem) about the Monty Hall problem along with an explanation of the probablities observed by the results of this program.![Monty_open_door svg](https://user-images.githubusercontent.com/59177560/194736208-341fd1a0-2855-4625-bbe4-e94f2002a30a.png)

# How to Compile
This repo includes a makefile for compiling main. Just clone this repo, navigate to the folder, and type `make`. This will create a binary executable called main.

# How to use
Run the executable with `./main` while inside the folder. All you have to do is type in a number (positive), which represents the number of times to simulate the Monty Hall problem. The results of the simulation, such as the win percentages for both swapping doors and staying doors, are printed to the console.

# Results
The program's results are consistant with the proven probabilities calculated for this problem. As the explanation on [Wikipedia](https://en.wikipedia.org/wiki/Monty_Hall_problem#/media/File:Monty_open_door.svg) suggests, you are twice as likely to win the car by swapping doors when given the choice.
