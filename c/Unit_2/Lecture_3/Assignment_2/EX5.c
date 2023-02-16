/*
 * EX5:
 * write C program to check whether a character is an alphaber or not .
 */
#include <stdio.h>
void main()
{
    char c;
    printf("Enter a character:");
    fflush(stdin); fflush(stdout);
    scanf("%c",&c);
    if((c>='a' && c<='z') || (c>='A' && c<='Z'))
        printf("%c is an alphabet.",c);
    else 
        printf("%c is not an alphabet.",c);
}
// ====> Aalaa <====