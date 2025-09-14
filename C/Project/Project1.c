#include <stdio.h>
#include <stdlib.h> //provide functions like rand()(random number generator) and srand(seed the random number generator)
#include <time.h> //helps to get the current time for seeding 

int main() {  //Every C program starts execution from the main() function.
    // Seed the random number generator with current time
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1; //rand() % 100 gives a number between 0 and 99, adding 1 shifts it to 1-100
    int userGuess = 0;
    int attempts = 0;

    printf("Guess the number (between 1 and 100): ");

    while (userGuess != randomNumber) {
        scanf("%d", &userGuess);
        attempts++;

        if (userGuess < randomNumber) {
            printf("Too low! Try again: ");
        } else if (userGuess > randomNumber) {
            printf("Too high! Try again: ");
        } else {
            printf("Congratulations! You guessed the number %d correctly in %d attempts!\n",
                   randomNumber, attempts);
        }
    }

    return 0;
}
