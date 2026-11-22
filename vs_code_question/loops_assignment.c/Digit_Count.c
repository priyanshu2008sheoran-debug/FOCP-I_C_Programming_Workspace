/*Given a non-negative integer n, count the total number of digits in it. 
Example 1 
Input: n = 12345       
Output: 5 
Example 2 
Input: n = 7                
Output: 1 
Example 3 
Input: n = 0               
Output: 1 
Explanation: 0 is written with a single digit.*/

#include<stdio.h>
int main() {
    int n;
    int count=0;
    

    printf("n =");
    scanf("%d",&n);

if(n==0) 
{
    count=1;
}

else{
    for(;n>0;count++) {
        n=n/10;
    }   }

    printf("%d",count); 
    return 0;
}