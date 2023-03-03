 /*
    Author: Aalaa Adel
    Created on: 2023-03-03
 	EX3 : 
	Write a c program to reverse string
*/

#include <stdio.h>
#include <string.h>
void main() {
    char s[1000] ;
    printf("Enter a string: ");
    fflush(stdin); fflush(stdout);
    gets(s);
    int c = 0;
    for(int i = 0; s[i] != '\0'; i++)
        c++;
    printf("Reverse string is : ");
    for(int i = c; i >= 0; i--)
        printf("%c", s[i]);
}