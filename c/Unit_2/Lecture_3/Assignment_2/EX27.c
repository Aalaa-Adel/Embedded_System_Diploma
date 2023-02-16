/*
 * EX7:
 * write C program to find factorial of a number.
 */
#include <stdio.h>
void main()
{
    int n;
    printf("Enter an integer:");
    scanf("%d",&n);
    if(n < 0 )
        printf("Error!!! Factorial of negative number doesn't exust.");
    else {
        int f=1;
        for(int i = 1 ; i<= n ; i++)
            f *= i;
        printf("Factorial = %d",f);
    }
}
// ====> Aalaa <====