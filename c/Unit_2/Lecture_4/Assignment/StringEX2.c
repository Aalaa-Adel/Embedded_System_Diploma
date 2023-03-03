 /*
    Author: Aalaa Adel
    Created on: 2023-03-03
 	EX2 : 
    Write a C program to find the length of a string .
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
    printf("Length of string: %d", c);
    //printf("Length of string: %d",strlen(s));

}