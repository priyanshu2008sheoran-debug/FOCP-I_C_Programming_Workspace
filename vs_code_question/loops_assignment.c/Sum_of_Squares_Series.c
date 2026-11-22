/*Sum of Squares Series 
Given a positive integer n, calculate the sum of the series: 
1² + 2² + 3² + 4² + ... + n²*/

#include<stdio.h>
int main() {
    long long int n;
    long long int sum=0;
   

    printf("Enter the number :");
        scanf("%lld",&n);

    long long int till=n;

    for(int i=0;i<till;i++) {
        sum=sum+n*n;
        n=n-1;

    }
    printf("\nSum of Squares Series :%lld",sum);
   
        return 0;
}