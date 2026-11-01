/*Industry-Style Invoice Calculator A company wants to generate a simple invoice for a customer. 
Implement a C program to accept: 
• Product ID 
• Product Price 
• Quantity 
• Discount Percentage */

#include<stdio.h>
int main() {
    char itemname[20];
    float price,discountpercentage,subtotal,discount_amount,final_amount;
    int quantity;

    printf("Enter product id :");
        scanf("%s",&itemname);
    printf("\nEnter product price :");
        scanf("%f",&price);
    printf("\nEnter the number of item :");
        scanf("%d",&quantity);
    printf("\nEnter Discount percentage :");
        scanf("%f",&discountpercentage);
        
        //calculations
        subtotal=price*quantity;
        discount_amount=(subtotal*discountpercentage)/100.0;
        final_amount=subtotal - discount_amount;
        //printing all value
        printf("\nProduct Id :%s\nSubtotal :%.2f\nDiscount Amount :%.2f\nFinal Payable Amount :%.2f",itemname,subtotal,discount_amount,final_amount);
        return 0;


}