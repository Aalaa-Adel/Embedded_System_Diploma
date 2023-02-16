/*
 * EX2:
 * write C program to check volwel or consonant .
 */
#include <stdio.h>
void main()
{
    char c;
    printf("Enter an alphabet: ");
    fflush(stdin); fflush(stdout);
    scanf("%c",&c);
    if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
        printf("%c is a vowel.", c);
    else
        printf("%c id consonant.",c);
}
// ====> Aalaa <====