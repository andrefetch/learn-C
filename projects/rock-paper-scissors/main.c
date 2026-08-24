#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice, int computerChoice);

int main() {

    // ROCK PAPER SCISSORS

    srand(time(NULL));

    printf("*** ROCK PAPER SCISSORS ***\n");

    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();

    switch(userChoice){
        case 1:
            printf("You chose ROCK!\n");
            break;
        case 2:
            printf("You chose PAPER!\n");
            break;
        case 3:
            printf("You chose SCISSORS!\n");
            break;
    }

    switch(computerChoice){
        case 1:
            printf("Computer chose ROCK!\n");
            break;
        case 2:
            printf("Computer chose PAPER!\n");
            break;
        case 3:
            printf("Computer chose SCISSORS!\n");
            break;
    }

    checkWinner(userChoice, computerChoice);

    return 0;

}

int getComputerChoice() {

    return (rand() % 3) + 1;

}

int getUserChoice() {

    int choice = 0;

    do{
        printf("Choice an option\n");
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissors\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    }while(choice < 1 || choice > 3);

    return choice;

}

void checkWinner(int userChoice, int computerChoice) {

    if(userChoice == computerChoice) {
        printf("It's a TIE!\n");
    }
    else if(userChoice == 1 && computerChoice == 3){
        printf("You WIN!\n");
    }
    else if(userChoice == 2 && computerChoice == 1){
        printf("You WIN!\n");
    }
    else if(userChoice == 3 && computerChoice == 2){
        printf("You WIN!\n");
    }
    else {
        printf("You LOSE!\n");
    }
}
