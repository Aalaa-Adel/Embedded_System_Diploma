/*
 * EX8:
 * write C program to make a simple calculator to add, subtract, multiply or divide using switch ...case.
 */
#include <stdio.h>
void main()
{
    char c;
    printf("Enter operator either + or - or * or divide : ");
    scanf("%c",&c);
    float num1,num2;
    printf("Enter two operands:");
    scanf("%f%f",&num1,&num2);
    switch(c)
    {
        case '+':{
            printf("%.1f + %.1f = %.1f", num1 , num2, num1 + num2);
            break;
        }
        case '-':{
            printf("%.1f - %.1f = %.1f", num1 , num2, num1 - num2);
            break;
        }case '*':{
            printf("%.1f * %.1f = %.1f", num1 , num2, num1 * num2);
            break;
        }case '/':{
            printf("%.1f / %.1f = %.1f", num1 , num2, num1 / num2);
            break;
        }
        default : {
            printf("Error! operator is not correct");
            break;
        }
    }

}
// ====> Aalaa <====