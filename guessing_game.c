/*
NAME: DENNIS KARIUKI NGANGA
REG NO: CT101/G/26473/25
DESCRIPTION: A C program where the player guesses a random number between 1 and 20.
*/

#include <stdio.h>     // for printf() and scanf()
#include <stdlib.h>    // for rand() and srand()
#include <time.h>      // for time() to seed random generator

int main() {
    int secret_number, guess, attempts = 0;

    srand(time(NULL));            // seed the random number generator
    secret_number = rand() % 20 + 1; // generate number between 1 and 20

    printf("Welcome to the Number Guessing Game!\n");

    do {
        printf("Enter your guess (1–20): ");
        scanf("%d", &guess);
        attempts++;   // countthe number of guesses

          if (guess > secret_number) 
		   {
            printf("Too high!\n");
         }else if (guess < secretNumber)
		   { printf("Too low!\n");
           } else {
            printf("Congratulations! You guessed it!\n");
            
            printf("Total attempts: %d\n", attempts);//prints the number of trials
        }

    } while (guess != secret_number);

    return 0;
}

