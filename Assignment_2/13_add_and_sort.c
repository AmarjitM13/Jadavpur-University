#include<stdio.h> 

// function to get matrix elements entered by the user
void getMatrixElements(int matrix[][10], int row, int column) {

   printf("\nEnter elements: \n");

   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         printf("Enter a%d%d: ", i + 1, j + 1);
         scanf("%d", &matrix[i][j]);
      }
   }
}

// function to display the matrix
void display(int result[][10], int row, int column) {

   printf("\nOutput Matrix:\n");
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         printf("%d  ", result[i][j]);
         if (j == column - 1)
            printf("\n");
      }
   }
}

int main() 
 
{ 
     
  int first[10][10], second[10][10], result[10][10], r1, c1, r2, c2;
   printf("Enter rows and column for the first matrix: ");
   scanf("%d %d", &r1, &c1);
   printf("Enter rows and column for the second matrix: ");
   scanf("%d %d", &r2, &c2);

   // Taking input until
   // 1st matrix columns is not equal to 2nd matrix row
   while (c1 != c2 || r1 != r2) {
      printf("Error! Enter rows and columns again.\n");
      printf("Enter rows and columns for the first matrix: ");
      scanf("%d%d", &r1, &c1);
      printf("Enter rows and columns for the second matrix: ");
      scanf("%d%d", &r2, &c2);
   }

   // get elements of the first matrix
   getMatrixElements(first, r1, c1);

   

   // get elements of the second matrix
   getMatrixElements(second, r2, c2);

   display(first, r1, c1);
   display(second, r2, c2);

      for( int k=0; k< r1; k++) {

   for (int i = 0; i < c1; i++) {
     for (int j = i +1; j < c1; ++j) {
       if (first[k][i] > first[k][j])  {
           int swap = first[k][i];
           first[k][i] = first[k][j];
           first[k][j] = swap;
       }
     }
   } 
}

      for( int k=0; k< r1; k++) {

   for (int i = 0; i < c1; i++) {
     for (int j = i +1; j < c1; ++j) {
       if (second[k][i] > second[k][j])  {
           int swap = second[k][i];
           second[k][i] = second[k][j];
           second[k][j] = swap;
       }
     }
   } 
}

printf("\nSorted first array.\n");
display(first, r1, c1);

printf("\nSorted second array.\n");
display(second, r2, c2);
 

 for (int i = 0; i < r1; ++i)
    for (int j = 0; j < c1; ++j) {
      result[i][j] = first[i][j] + second[i][j];
    }

for( int k=0; k< r1; k++) {
   for (int i = 0; i < c1; i++) {
     for (int j = i +1; j < c1; ++j) {
       if (result[k][i] > result[k][j])  {
           int swap = result[k][i];
           result[k][i] = result[k][j];
           result[k][j] = swap;
       }
     }
   } 
}

printf("\nSorted sum array.\n");
    display(result, r1, c1);
   return 0;
 
}