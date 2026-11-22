/*Given a non-negative integer n, return its factorial, defined as: 
n! = n × (n-1) × (n-2) × ... × 1 
By definition, 0! = 1. 
Example 1 

Input: n = 5     Output: 120 
Explanation: 5! = 5 × 4 × 3 × 2 × 1 = 120. 
Example 2 

Input: n = 0      Output: 1 
Explanation: 0! is defined as 1. 
*/

#include<stdio.h>
int main() {
    long long int n,till,fact;
    fact=1;
        printf("n =");
            scanf("%lld",&n);
    till=n;

    for(int i=0;i<till;i++) {
        fact=fact*n;
        n=n-1;
    }

    printf("Output :%lld",fact);                //according to question there is not need to write output and n it is for understand the code better
    return 0;
}