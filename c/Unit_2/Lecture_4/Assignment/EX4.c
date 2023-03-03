 /*
    Author: Aalaa Adel
    Created on: 2023-03-03
 	EX4 : 
    Write a c program to insert an element in an array.
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
    printf("Enter the element to be inserted : ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&x);

    printf("Enter the location : ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&l);

    n++;
    l--;
    for(int i = 0; i < n; i++){
       if(i == l){
        printf("%d ",x);
       }
       if(i < l){
        printf("%d ",arr[i]);
       }
       if(i > l){
        printf("%d ",arr[i - 1]);
       }
    }
    




}