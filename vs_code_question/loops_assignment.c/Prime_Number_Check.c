/*Difficulty: Easy 
Given a positive integer n, determine whether it is a prime number — a 
number greater than 1 that has no positive divisors other than 1 and itself. 
*/
#include<stdio.h>
int main() {
    int num;
    printf("n=");
        scanf("%d",&num);

    if(num==1)
    {
        printf("Not a Prime");
    }

    else
    {
        for(int i=2;i<num/2;i++) {
            if(num%i!=0) {
            printf("Prime");
            break; }
            else
            printf(" Not Prime");
            break;
        }
        
    }
    
    return 0;
}