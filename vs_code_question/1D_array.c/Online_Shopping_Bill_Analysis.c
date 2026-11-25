/*An online shopping application stores the prices of N products selected by a customer. 
Calculate the total cost of the products and identify the most expensive and least 
expensive items. */

#include<stdio.h>
int main() {
    int n;
    printf("Enter the number of product :");
    scanf("%d",&n);

    float price[n];
    for(int i=0;i<n;i++)
    {
        scanf("%f",&price[i]);
    }

    float sum=0;

    for(int i=0;i<n;i++)
    {
        sum+=price[i];
    }

    float expensive=price[0];
    float notexpensive=price[0];

     for(int i=0;i<n;i++)
    {
        if(price[i]>expensive) {
            expensive=price[i];
        }
        if(price[i]<notexpensive){
            notexpensive=price[i];
        }

    }

printf("\ntotal bill :%.2f",sum);
printf("\nexpensive :%.2f",expensive);
printf("\nleast expensive :%.2f",notexpensive);
return 0;



}