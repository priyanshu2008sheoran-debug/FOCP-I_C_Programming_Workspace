/*A student is eligible for a scholarship if: 
• Marks are at least 75  
• Attendance is at least 75%  
However: 
• If marks are 90 or above and attendance is at least 70%, print Special 
Scholarship.  
• Otherwise, if both normal conditions are satisfied, print Eligible.  
• Else print Not Eligible. */

#include<stdio.h>
int main() {
    float marks,attendance;
    printf("Enter Your Marks :");
        scanf("%f",&marks);
    printf("Enter Your Attendance(in %%) :");
        scanf("%f",&attendance);
    
    if(marks>=90 && attendance>=70)
    printf("Special Scholarship");

    else if(marks>=75 && attendance>=75)                 
    printf("Eligible");

    else
    printf("Not Eligible");
    return 0;
}