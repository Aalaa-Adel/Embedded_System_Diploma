/*
 * EX3:
 * write C program to find the largest number among three numbers .
 */
#include <stdio.h>
int main()
{
    float num1,num2,num3;
    printf("Enter three numbers:");
   // fflush(stdin); fflush(stdout);
    scanf("%f%f%f ",&num1,&num2,&num3);
    fflush(stdin); fflush(stdout);
    if(num1 >= num2 && num1 >= num3)
        printf("Largest number = %.2f",num1);
    if(num2 >= num1 && num2 >= num3)
        printf("Largest number = %.2f",num2);
    if(num3 >= num2 && num3 >= num1)
        printf("Largest number = %.2f",num3);
   return 0;
}
// ====> Aalaa <====