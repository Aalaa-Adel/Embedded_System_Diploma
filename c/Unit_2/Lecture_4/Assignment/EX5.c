 /*
    Author: Aalaa Adel
    Created on: 2023-03-03
 	EX5 : 
    Write a c program to search an element in an array.
*/

#include<stdio.h>
void main() {

    int n, x, l;
    printf("Enter no of elements : ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&n);
    int arr[100];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched : ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&x);

    for(int i = 0; i < n; i++)
        if(arr[i] == x)
            printf("Number found at the location = %d", i + 1);
    
}