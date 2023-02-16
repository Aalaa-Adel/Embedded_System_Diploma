/*
EX7:

Write Source Code to Swap Two Numbers without temp variable.
*/
#include <stdio.h>
void main()
{
    float a , b ,Temp;
    printf("Enter value of a: ");
    fflush(stdin); fflush(stdout);
    scanf("%f",&a);
    printf("Enter value of b: ");
    fflush(stdin); fflush(stdout);
    scanf("%f",&b);
    a = a + b;
    b = a - b; 
    a = a - b;
    printf("After swapping, value of a = %f\n",a);
    printf("After swapping, value of b = %f\n",b);

}

// ====> Aalaa <====