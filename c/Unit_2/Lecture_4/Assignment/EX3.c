 /*
    Author: Aalaa Adel
    Created on: 2023-03-03
 	EX3 : 
    This program asks user to enter a matrix(size of matrix is specified by user)
        and this program finds the trandpose of that matrix and displays it.
*/

#include<stdio.h>
void main() {

   int r, c;
   printf("Enter rows and column of matrix: ");
   fflush(stdin); fflush(stdout);
   scanf("%d%d", &r , &c);
   int arr[r][c];
   for(int i = 0; i < r; i++){
       for(int j = 0; j < c; j++){
           printf("Enter elements a%d%d: ", i + 1, j + 1);
           fflush(stdin); fflush(stdout);
           scanf("%d", &arr[i][j]);
       }
   }

   printf("Entered Matrix: \n");
   for(int i = 0; i < r; i++){
       for(int j = 0; j < c; j++){
           printf("%d ", arr[i][j]);
       }
       printf("\n");
   }
   
   printf("Transpose of Matrix: \n");
   for(int i = 0; i < c; i++){
       for(int j = 0; j < r; j++){
           printf("%d ", arr[j][i]);
       }
       printf("\n");
   }


}