#include <stdio.h>
#include <stdlib.h>

void rotate_90(int n, int *matrix){

   for(int j = 0; j < n; ++j){
      for(int i = n - 1; i > -1; --i){      
         printf("%d ", matrix[i *  n + j]);      
      }
      printf("\n");
   }

}


int main(){
   int n;
   scanf("%d", &n);

   int matrix[n][n];
   //int** matrix = 

   for(int i = 0; i < n; ++i){
      for(int j = 0; j < n; ++j){
         scanf("%d", &matrix[i][j]);
      }
   }
   
   printf("\n");

   for(int i = 0; i < n; ++i){
      for(int j = 0; j < n; ++j){
         printf("%d ", matrix[i][j]);
      }
      printf("\n");
   }

   printf("\n");

   rotate_90(n, matrix[0]);

}