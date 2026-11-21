/*Two players enter: 
1 → Rock 
2 → Paper 
3 → Scissors 
Implement a C program using switch and if-else to determine: 
• Player 1 Wins  
• Player 2 Wins  
• Draw  
• Invalid Input if either player enters anything other than 1, 2, or 3.  */

#include<stdio.h>
int main() {
int out1,out2;


    printf("Lets start the game\n1 for Rock\n2 for Paper\n3 for Scissors");
    printf("\nPlayer 1:-what would you choose:");
        scanf("%d",&out1);
    printf("\nPlayer 2:-what would you choose:");
        scanf("%d",&out2);
        
    
    if((out1>0 && out2>0) && (out1<4 && out2<4)) {
        switch(out1)
        {
            case 1:
            if(out2==1)
            printf("Draw");
            else if(out2==2)
            printf("Player 2 won");
            else
            printf("Player 1 won");
            break;

            case 2:
            if(out2==1)
            printf("Player 1 won");
            else if(out2==2)
            printf("Draw");
            else
            printf("Player 2 won");
            break;

            case 3:
            if(out2==1)
            printf("Player 2 won");
            else if(out2==2)
            printf("Player 1 won");
            else
            printf("Draw");
            break;

        }
    }
    else
    printf("Invalid input if either player enters anything other than 1,2,3");
    return 0;
}