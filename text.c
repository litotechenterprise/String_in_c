#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(){
    
    // Setting up the Var's for the game
    int randomNumber = 0;
    int guess;
    int MaxNumOfGuesses;
    time_t t;

    // intialize of the random number generator
    srand((unsigned) time(&t));

    // get the random number
    randomNumber = rand() % 21;

    printf("This is a guessing game\n");
    printf("Pick a number 1-20");


    for(MaxNumOfGuesses = 5; MaxNumOfGuesses > 0; --MaxNumOfGuesses) {
        printf("\nYou have %d tr%s left.", MaxNumOfGuesses, MaxNumOfGuesses == 1 ? "y" : "ies");
        printf("\nEnter you guess:  ");
        scanf("%d", &guess);
        
        if(guess == randomNumber){
            printf("\nCongrates you got it right it was %i", guess);
            break;
        } else if( guess < 0 || guess > 20 ){
            printf("You game an invalid guess!");
        } else if (guess > randomNumber){
            printf("Your guess of %i is too high", guess);
        }else {
            printf("Your guess of %i is too low", guess);
        }

        printf("\n");
    }
    printf("\n play again");
    
    return 0;
}