/* Three Numbers – Find the Middle 
Implement a program that takes three different integers a, b, and c and prints the 
middle value (neither maximum nor minimum).*/

#include<stdio.h>
int main() {
    int num1,num2,num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2) {
        if(num2>num3)
            printf("%d is the middle term",num2);
        else
        printf("%d is the middle term",num3);
    }
    else if(num2>num3) {
        if(num3>num1)
        printf("%d is the middle term",num3);
        else
        printf("%d is the middle term",num1);
    }
    else if(num3>num1){
        if(num1>num2)
        printf("%d is the middle term",num1);
        else
        printf("%d is the middle term",num2);
    }
    return 0;

}