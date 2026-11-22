/*Q3. Geometric Series Sum 
Given the first term a, the common ratio r, and the number of terms n of a 
geometric series, return the sum of its first n terms: 
a + a·r + a·r² + ... + a·r^(n-1) 
Example 1 
Input: a = 2, r = 3, n = 4          
Output: 80 
Explanation: Terms are 2, 6, 18, 54. Sum = 80. 
Example 2 
Input: a = 5, r = 1, n = 10         
Output: 50 
Explanation: With r = 1 every term is 5, so the sum is 5 × 10 = 50.*/

#include<stdio.h>
#include<math.h>

int main() {
    int a,r,n,till;
    long long int gseries=0;

    //input

    printf("a=");
        scanf("%d",&a);
    printf("\nr=");
        scanf("%d",&r);
    printf("\nn=");
        scanf("%d",&n);

//logic
    till=n;
    for(int i=0;i<till;i++) {
        gseries=gseries + a * pow(r,n-1);
        n=n-1;
    }

    printf("Output:%lld",gseries);
}