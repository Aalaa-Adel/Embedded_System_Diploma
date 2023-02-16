/*
 * EX4:
 * write C program to check whether a number is positive or negative .
 */
#include <stdio.h>
void main()
{
    float num ;
    printf("Enter a number:");
    fflush(stdin); fflush(stdout);
    scanf("%f",&num);
    if(num > 0)
        printf("%.2f is positive.",num);
    if(num < 0)
        printf("%.2f is negative.",num);
    if(num == 0)
        printf("Yor entered zere.");
    
}
// ====> Aalaa <====