#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Constants for choices
#define ROCK 1
#define PAPER 2
#define SCISSORS 3

// Constants for outcomes
#define WIN 1
#define LOSE -1
#define DRAW 0

// Function to get computer's choice
int getComputerChoice() {
    return (rand() % 3) + 1; // Generates a random number between 1 and 3
}

// Function that determines the winner
int determineWinner(int userChoice, int computerChoice) {
    if (userChoice == computerChoice)
        return DRAW;
    else if ((userChoice == ROCK && computerChoice == SCISSORS) ||
             (userChoice == PAPER && computerChoice == ROCK) ||
             (userChoice == SCISSORS && computerChoice == PAPER))
        return WIN;
    else
        return LOSE;
}

int main() { 
    int userChoice, computerChoice, result;
    
    // Initialize random number generator
    srand(time(NULL));

    // Display Menu for choices
    printf("Choose Rock, Paper, or Scissors\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");

    // Get user's choice
    printf("Enter your choice (1-3): ");
    scanf("%d", &userChoice);

    // Validate user's choice
    if (userChoice < 1 || userChoice > 3) {
        printf("Invalid choice. Please choose a number between 1 and 3.\n");
        return 1; // Exit with error
    }

    // Get computer's choice
    computerChoice = getComputerChoice();

    // Determines who wins
    result = determineWinner(userChoice, computerChoice);

    // Displays choices
    printf("You chose: ");
    switch(userChoice) {
        case ROCK:
            printf("Rock\n");
            break;
        case PAPER:
            printf("Paper\n");
            break;
        case SCISSORS:
            printf("Scissors\n");
            break;
    }

    printf("Computer chose: ");
    switch(computerChoice) {
        case ROCK:
            printf("Rock\n");
            break;
        case PAPER:
            printf("Paper\n");
            break;
        case SCISSORS:
            printf("Scissors\n");
            break;
    }

    // Display result
