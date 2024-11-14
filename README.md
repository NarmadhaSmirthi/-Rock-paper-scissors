Rock, Paper, Scissors Game in C
Overview
This is a simple Rock, Paper, Scissors game implemented in the C programming language. In this game, the user plays against the computer, with each round randomly generating the computer's choice. The program determines the winner based on the standard rules:

Rock beats Scissors
Scissors beat Paper
Paper beats Rock
The game continues until the user chooses to stop playing.

How to Play
Run the program.
Enter your choice: r for Rock, p for Paper, or s for Scissors.
The computer will randomly choose one of the three options.
The program will display both your choice and the computer's choice, then announce the result (win, lose, or tie).
After each round, you will be prompted to play again or quit.
Rules
Rock crushes Scissors
Scissors cut Paper
Paper covers Rock
Compilation and Execution
Prerequisites
You need a C compiler installed on your machine, such as gcc.
Steps
Clone or download this repository to your local machine.

Open a terminal in the directory containing the source code.

Compile the code with the following command:

bash
Copy code
gcc rock_paper_scissors.c -o rock_paper_scissors
Run the game:

bash
Copy code
./rock_paper_scissors
Example Gameplay
rust
Copy code
Welcome to Rock, Paper, Scissors Game!
Enter your choice (r for Rock, p for Paper, s for Scissors): r
You chose: Rock
Computer chose: Scissors
You win!
Do you want to play again? (y/n): y
Code Explanation
playGame: Manages each round of the game, getting the user’s input and generating the computer’s choice.
getComputerChoice: Randomly selects Rock, Paper, or Scissors for the computer.
displayChoice: Converts the internal representation of choices (r, p, s) into readable text.
determineWinner: Compares the user and computer choices to determine the outcome.
Dependencies
Standard C Libraries: This program only uses standard C libraries (stdio.h, stdlib.h, time.h), so no external libraries are required.
License
This project is open-source and freely available to use, modify, and distribute under the MIT License.
