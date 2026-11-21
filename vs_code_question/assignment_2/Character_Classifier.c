//Character Classifier
/*• Vowel if it is a, e, i, o, u (uppercase or lowercase)  
• Digit if it is 0–9  
• Consonant if it is an English alphabet but not a vowel  
• Special Character otherwise  */

#include<stdio.h>
int main() {
    char cah;
   
    
    printf("Enter the character :");
        scanf("%c",&cah);
    // we use if else if ladder switch case is long as we have make different cases 


    if(cah>='0' && cah<='9')
    printf("Digit");
    else if((cah>='A' && cah<='Z') || (cah>='a' && cah<='z'))
    {
        if(cah=='A' || cah=='a' || cah=='e' || cah=='E' || cah=='i' || cah=='I' || cah=='o' || cah=='O' || cah=='u' || cah=='U')
        printf("Vowel");
        else
        printf("English alphabet but not a vowel");
    }
    else
    printf("Special Character");
}