#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROCK 1
#define PAPER 2
#define SCISSORS 3
#define ALUMETTE 4
#define TOILET 5

int main() {
    int playerScore = 0;
    int computerScore = 0;
    int rounds = 0;

    printf("Welcome to Rock-Paper-Scissors-Alumette-Toilet game!\n\n");

    while(1) {
        int playerMove;
        printf("Enter your move (1 = Rock, 2 = Paper, 3 = Scissors, 4 = Alumette, 5 = Toilet, 0 = Quit): ");
        scanf("%d", &playerMove);

        if (playerMove == 0) {
            break;
        }

        if (playerMove < 1 || playerMove > 5) {
            printf("Invalid move! Please try again.\n");
            continue;
        }

        int computerMove = rand() % 5 + 1;

        printf("You played: ");
        switch(playerMove) {
            case ROCK:
                printf("Rock\n");
                break;
            case PAPER:
                printf("Paper\n");
                break;
            case SCISSORS:
                printf("Scissors\n");
                break;
            case ALUMETTE:
                printf("Alumette\n");
                break;
            case TOILET:
                printf("Toilet\n");
                break;
        }

        printf("Computer played: ");
        switch(computerMove) {
            case ROCK:
                printf("Rock\n");
                break;
            case PAPER:
                printf("Paper\n");
                break;
            case SCISSORS:
                printf("Scissors\n");
                break;
            case ALUMETTE:
                printf("Alumette\n");
                break;
            case TOILET:
                printf("Toilet\n");
                break;
        }

        printf("Computer played: ");
        switch(computerMove) {
            case ROCK:
                printf("Rock\n");
                break;
            case PAPER:
                printf("Paper\n");
                break;
            case SCISSORS:
                printf("Scissors\n");
                break;
            case ALUMETTE:
                printf("Alumette\n");
                break;
            case TOILET:
                printf("Toilet\n");
                break;
        }

        if (playerMove == computerMove) {
            printf("It's a tie!\n");
        } else if (playerMove == ROCK && computerMove == SCISSORS ||
                   playerMove == PAPER && computerMove == ROCK ||
                   playerMove == SCISSORS && computerMove == PAPER ||
                   playerMove == SCISSORS && computerMove == ALUMETTE ||
                   playerMove == ALUMETTE && computerMove == PAPER ||
                   playerMove == TOILET && computerMove == PAPER ||
                   playerMove == TOILET && computerMove == ALUMETTE ||
                   playerMove == TOILET && computerMove == SCISSORS ||
                   playerMove == ROCK && computerMove == TOILET) {
            printf("You win this round!\n");
            playerScore++;
        } else {
            printf("Computer wins this round!\n");
            computerScore++;
        }

        rounds++;
        printf("Current score: You %d - %d Computer\n\n", playerScore, computerScore);
    }

    printf("\nFinal score: You %d - %d Computer\n", playerScore, computerScore);
    printf("Total rounds played: %d\n", rounds);

    return 0;
}

