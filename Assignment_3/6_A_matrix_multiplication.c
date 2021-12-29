#include <stdio.h>

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

// function to multiply two matrices
void multiplyMatrices(int first[][10],
                      int second[][10],
                      int result[][10],
                      int r1, int c1, int r2, int c2) {

   // Initializing elements of matrix mult to 0.
   for (int i = 0; i < r1; ++i) {
      for (int j = 0; j < c2; ++j) {
         result[i][j] = 0;
      }
   }

   // Multiplying first and second matrices and storing it in result
   for (int i = 0; i < r1; ++i) {
      for (int j = 0; j < c2; ++j) {
         for (int k = 0; k < c1; ++k) {
            result[i][j] += first[i][k] * second[k][j];
         }
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

int main() {
   int first[10][10], transpose[10][10], result[10][10], r1, c1, r2, c2,c,d;
   printf("Enter rows and column for the first matrix: ");
   scanf("%d %d", &r1, &c1);
   
   r2 = c1;
   c2 = r1;

   // get elements of the first matrix
   getMatrixElements(first, r1, c1);

// Printing the matrix
    printf("\nThe matrix:\n");
    for (int i = 0; i < r1; ++i)
    for (int j = 0; j < c1; ++j) {
    printf("%d  ", first[i][j]);
    if (j == c1 - 1)
    printf("\n");
  }

    // computing the transpose
  for (int i = 0; i < r1; ++i)
  for (int j = 0; j < c1; ++j) {
    transpose[j][i] = first[i][j];
  }

  // printing the transpose
  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < c1; ++i)
  for (int j = 0; j < r1; ++j) {
    printf("%d  ", transpose[i][j]);
    if (j == r1 - 1)
    printf("\n");
  }

   // multiply two matrices.
   multiplyMatrices(first, transpose, result, r1, c1, r2, c2);

   // display the result
   display(result, r1, c2);

   for (c = 0; c < r1; c++)
  {
    for (d = 0; d < r1; d++)
    {
      if (c == d)
      {
        if (result[c][d] != 1)
          break;
      }
      else
      {
        if (result[c][d] != 0)
          break;
      }
    }
    if (d != r1)
      break;
  }
  if (c != r1)
    printf("The matrix isn't orthogonal.\n");
  else
    printf("The matrix is orthogonal.\n");

   return 0;
}