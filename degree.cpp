/* The policy followed by a company to process customer orders is given by the following rules:
(i) If a customer order is less than or equal to that in stock and has credit is OK, supply has requirement.
(ii) If has credit is not OK do not supply. Send him intimation.
(iii) If has credit is Ok but the item in stock is less than has order, supply what is in stock. 
Intimate to him data the balance will be shipped.
Write a C program to implement the company policy */
#include<stdio.h>
#define STOCK 200

int main()
{
   float Order;
char Credit;
    printf("Enter order qty: ");
    scanf("%f",&Order);
    printf("Is credit OK(Y/N): ");
    scanf("%c",&Credit);
    if(Order<=STOCK && (Credit=='y'||Credit=='Y'))
        printf("Supply %f qty",Order);
    else if(Order<=STOCK && (Credit=='n'||Credit=='N'))
        printf("Credit not sufficient, please clear previous balance");
    else if(Order>STOCK && (Credit=='Y'||Credit=='y'))
        printf("Supply %f qty; %f will be shipped in next week",STOCK,(Order-STOCK));
 else if(Order>STOCK && (Credit=='N'||Credit=='n'))
      printf("Credit not sufficient, please clear previous balance");
}
