/*The attendance percentage of N students is stored in an array. The college considers 
students eligible for an examination only if their attendance is at least 75%. Determine 
how many students are eligible and how many fall short of the requirement. */



#include<stdio.h>
int main() 
{
int n;


printf("Enter the number of student :");
    scanf("%d",&n);

int attendance[n];
int eligible=0;
int noteligible=0;

    for(int i=0;i<n;i++)
    {
        scanf("%d",&attendance[i]);
    }

    for(int i=0;i<n;i++)
    {
        if(attendance[i]>=75) {
            eligible++;
        }
        else {
        noteligible++; }
    }

    printf("\n%d are eligible and %d are not eligible",eligible,noteligible);
    return 0;
}