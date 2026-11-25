/*A faculty member has collected the marks of N students in a programming test. 
Develop a program that processes these marks and reports the class average, the 
highest marks obtained, and the lowest marks obtained.*/


#include<stdio.h>
int main()
{
int n;
int sum=0;


printf("Enter the number of student :");
    scanf("%d",&n);

int marks[n];

for(int i=0;i<n;i++) {                  //read input
    scanf("%d",&marks[i]);
}

int highest=marks[0];

int lowest=marks[0];

for(int i=0;i<n;i++) {
    sum+=marks[i];
}

float average=(float)sum/n;

for(int i=0;i<n;i++) {
    if(marks[i]>highest) {
    highest =marks[i];
    }

}

for(int i=0;i<n;i++) {
    if(marks[i]<lowest) {
    lowest =marks[i];
    }
    
}

printf("\nclass average :%.2f\n",average);
printf("highest marks :%d\n",highest);
printf("lowest marks :%d",lowest);



}



