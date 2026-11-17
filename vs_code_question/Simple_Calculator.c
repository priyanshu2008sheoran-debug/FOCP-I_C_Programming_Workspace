//  Simple Calculator using switch

#include<stdio.h>
int main() {
    char oper;
    int num1,num2;
    printf("Enter the number 1 :");
        scanf("%d",&num1);
    printf("\nEnter the number 2 :");
        scanf("%d",&num2);
    printf("\nEnter the operation performed(+ - / * %%) :");
        scanf(" %c",&oper);
            switch (oper){                                                  
                case '+':
                printf("sum:%d",num1+num2);
                break;
                case '-':
                printf("subtraction:%d",num1-num2);
                break;
                case '/':
                if(num2==0)                                         
                printf("the operation can not perform");
                else
                printf("division:%.2f",(float)num1/num2);
                break;
                case '*':
                printf("multiplication:%d",num1*num2);
                break;
                case '%':
                if(num2==0)
                printf("the operation can not perform");
                else
                printf("modulus:%d",num1%num2);
                break;
                default:
                printf("invalid operation");
            }
            return 0;
}