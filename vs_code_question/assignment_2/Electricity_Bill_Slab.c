 /*Electricity Bill Slab 
Implement a program to calculate the electricity bill based on units consumed: 
Units           Rate
0–100           ₹2/unit 
101–200         ₹3/unit
Above 200       ₹5/unit
 */
#include<stdio.h>
int main() {
    int units;
    int bill=0;
printf("Enter the units consumed :");
    scanf("%d",&units);

if(units<=100) {
    bill=units*2;
}
else if(units<=200) {
    units=units-100;
    bill=units*3+200;
}
else if(units>200) {
    units=units-200;
    bill=units*5+500;
}
printf("total bill is :%d",bill);
}