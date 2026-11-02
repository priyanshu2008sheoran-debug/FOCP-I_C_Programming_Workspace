/*Triangle Validator 

Given three angles a, b, and c, implement a program to determine: 
• Invalid if their sum is not 180 or any angle is 0 or negative.  
• Acute if all three angles are less than 90.  
• Right if exactly one angle is 90.  
• Obtuse otherwise. */

#include<stdio.h>
int main() {
    int a,b,c;
    printf("Enter the 3 angles of triangle :");
        scanf("%d %d %d",&a,&b,&c);
    if(a+b+c==180 && a>0 && b>0 && c>0) {
        if(a<90 && b<90 && c<90)
        printf("Acute");
        else if(a==90 || b==90 || c==90)
        printf("Right");
        else if(a>90 || b>90 || c>90)
        printf("Obtuse");
    }
    else
    printf("Invalid");
}