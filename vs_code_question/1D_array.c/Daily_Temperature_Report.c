/*The maximum temperatures recorded over N consecutive days are stored in an array. 
Generate a report showing the average temperature, the number of days above the 
average, and the highest temperature recorded.*/

#include<stdio.h>
int main() 
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    
    float temp[n];

    for(int i=0;i<n;i++) 
    {
        scanf("%f",&temp[i]);
    }
float sum=0;
    for(int i=0;i<n;i++) 
    {
        sum+=temp[i];
    }
    float average=sum/n;
int count=0;
float highest=temp[0];
    for(int i=0;i<n;i++) 
    {
        if(temp[i]>average){
            count++;
        }
        if(temp[i]>highest){
            highest=temp[i];
        }
    }
printf("\naverage temperature :%.2f",average);
printf("\nthe no of days above the average:%d",count);
printf("\nhighest temperature is :%.2f",highest);

}