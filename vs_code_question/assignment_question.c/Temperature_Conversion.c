// Temperature Conversion
//  C program to accept the temperature in Celsius and convert it into Fahrenheit.

#include<stdio.h>
int main() {
    float celsius,fahrenheit;
    printf("Enter the temperature in celsius :");
        scanf("%f",&celsius);
    fahrenheit=(celsius*9/5.0)+32;          
    printf("\nTemperature in (fahrenheit) is :%.2f",fahrenheit);
}