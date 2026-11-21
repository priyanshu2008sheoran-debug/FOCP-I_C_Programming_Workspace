/*An ATM allows withdrawal only when: 
• PIN is correct (1234)  
• Amount is a multiple of 100  
• Amount is less than or equal to balance  
• Amount is greater than 0  
Given pin, amount, and balance, print: 
• Invalid PIN  
• Invalid Amount  
• Insufficient Balance  
• Withdrawal Successful*/

#include<stdio.h>
int main() {
    int pin=1234;
    int pinen;
    int balance,amount;
        printf("Enter the balance of account:");
            scanf("%d",&balance);
        printf("\nEnter the pin:");
            scanf("%d",&pinen);

    if(pinen==pin) {
        printf("\nEnter the amount to withdrawal:");
        scanf("%d",&amount);

        if(amount%100==0 && amount<=balance && amount>0){
            printf("Withdrawal Successful");
            balance-=amount;
            printf("\nBalance remain :%d",balance);
        }
        else if(amount>balance)
        printf("Insufficient Balance");
        else 
        printf("Invalid Amount");

    }
    else
    printf("Invalid PIN");

}