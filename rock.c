#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void playGame();
char getComputerChoice();
void displayChoice(char choice);
void determineWinner(char userChoice, char computerChoice);

int main() {
    char playAgain;

    printf("Welcome to Rock, Paper, Scissors Game!\n");

    do {
        playGame();

        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Thanks for playing!\n");
    return 0;
}

void playGame() {
    char userChoice, computerChoice;

    // Get user choice
    printf("Enter your choice (r for Rock, p for Paper, s for Scissors): ");
    scanf(" %c", &userChoice);

    // Validate user input
    if (userChoice != 'r' && userChoice != 'p' && userChoice != 's') {
        printf("Invalid choice! Please enter 'r', 'p', or 's'.\n");
        return;
    }

    // Get computer choice
    computerChoice = getComputerChoice();

    // Display choices
    printf("You chose: ");
    displayChoice(userChoice);
    printf("Computer chose: ");
    displayChoice(computerChoice);

    // Determine the winner
    determineWinner(userChoice, computerChoice);
}

char getComputerChoice() {
    srand(time(NULL));
    int randomChoice = rand() % 3;

    switch (randomChoice) {
        case 0: return 'r'; // Rock
        case 1: return 'p'; // Paper
        case 2: return 's'; // Scissors
    }
    return 'r'; // Default to Rock if something goes wrong
}

void displayChoice(char choice) {
    switch (choice) {
        case 'r': printf("Rock\n"); break;
        case 'p': printf("Paper\n"); break;
        case 's': printf("Scissors\n"); break;
        default: printf("Unknown\n"); break;
    }
}

void determineWinner(char userChoice, char computerChoice) {
    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 'r' && computerChoice == 's') ||
               (userChoice == 'p' && computerChoice == 'r') ||
               (userChoice == 's' && computerChoice == 'p')) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
}
