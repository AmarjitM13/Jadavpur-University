#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,row,col,sum,a[50][50];
    float norm;
    printf("enter the no of row and column of matrix: ");
    scanf("%d %d",&row,&col);
    printf("enter the elements:\n");
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            scanf("%d",&a[i][j]);
        sum=sum+pow(a[i][j],2);
        }
    }
    norm=sqrt(sum);
    printf("norm of the matrix A is %f",norm);
    return 0;
}