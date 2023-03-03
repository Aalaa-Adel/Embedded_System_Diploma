/*
    Author: Aalaa Adel
    Created on: 2023-03-03
 	EX2 : 
    This program takes n number of element from user(where, n is specified by user), stores data in an array and calculates the average of those numbers. 
*/
#include<stdio.h>
void main() {

    int n;
    printf("Enter the numbers of date: ");
    fflush(stdin); fflush(stdout); 
    scanf("%d", &n);
    float arr[100] , sum = 0;
    for(int i = 0; i < n; i++) {
        printf("Enter number: ");
        fflush(stdin); fflush(stdout); 
        scanf("%f", &arr[i]);
        sum += arr[i];
    } 
    printf("Average = %.2f", sum / n);
}