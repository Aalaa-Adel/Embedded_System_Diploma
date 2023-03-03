 /*
    Author: Aalaa Adel
    Created on: 2023-03-03
 	EX1 : 
    Write a C program to find the frequency of characters in a string .
*/

#include <stdio.h>
#include <string.h>
void main() {
    char s[1000] , x;
    printf("Enter a string: ");
    fflush(stdin); fflush(stdout);
    gets(s);
    printf("Enter a character to find frequency: ");
    fflush(stdin); fflush(stdout);
    scanf("%c",&x);
    int c = 0;
    for(int i = 0; i < strlen(s); i++)
        if(s[i] == x)
            c++;
    printf("Frequency of %c = %d",x ,c);

}