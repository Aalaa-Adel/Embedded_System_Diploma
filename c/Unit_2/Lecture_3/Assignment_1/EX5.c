/*
EX5:

Write C Program to Find ASCII Value of a Character
*/
#include <stdio.h>
void main()
{
    char character;
    printf("Enter a character: ");
    fflush(stdin); fflush(stdout);
    scanf("%c",&character);
    printf("ASCII value of %c = %d", character , character);

}
// ====> Aalaa <====