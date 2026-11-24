// guess the number game

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() 
{
    int guess;
    srand(time(NULL));
    int secreteNumber = rand()%100 +1;

    printf("Guess number between 1-100 :\n");

    do{
        printf("Enter your guess :");
        scanf("%d",&guess);

        if(guess < secreteNumber){
            printf("Too low!!\n");
        }
        else if(guess > secreteNumber){
            printf("Too High!!\n");
        }
        else{
            printf("Congratulations ,Correct guss!!");
        }
    }while(guess !=secreteNumber);
    
    return 0;
}
