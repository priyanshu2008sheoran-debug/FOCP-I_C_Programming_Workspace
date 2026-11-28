#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int mode;
    int guess;
    int maxNumber;
    int maxAttempts;
    int attempts = 0;

    srand(time(NULL));
                                                            //choosing the game mode and store the value in mode variable
    printf("Choose the game mode:\n");
    printf("1. Easy   (1-100, 10 attempts)\n");
    printf("2. Medium (1-200, 7 attempts)\n");
    printf("3. Hard   (1-300, 5 attempts)\n");

    printf("Enter mode: ");
        scanf("%d", &mode);                                 //taking the input

    switch(mode)                                                //using the switch case using the mode variable
    {                                                             //alloting the variable value according to game mode
        case 1:
            maxNumber = 100;
            maxAttempts = 10;
            break;

        case 2:
            maxNumber = 200;
            maxAttempts = 7;
            break;

        case 3:
            maxNumber = 300;
            maxAttempts = 5;
            break;

        default:
            printf("Invalid mode!\n");
            return 1;
    }

    int secretNumber = rand() % maxNumber + 1;

    printf("\nGuess the number between 1 and %d\n", maxNumber);

    while(attempts < maxAttempts)
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if(guess < secretNumber)
        {
            printf("Too Low!\n");
        }
        else if(guess > secretNumber)
        {
            printf("Too High!\n");
        }
        else
        {
            printf("🎉 Congratulations! You guessed the number in %d attempts.\n", attempts);
            return 0;
        }

        printf("Attempts left: %d\n\n", maxAttempts - attempts);
    }

    printf("❌ Game Over!\n");
    printf("The correct number was %d\n", secretNumber);

    return 0;
}