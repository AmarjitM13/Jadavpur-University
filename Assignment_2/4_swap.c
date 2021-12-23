#include<stdio.h>
int main()
{
    int i,j,n,swap,num[50];
    printf("enter the number of values: ");
    scanf("%d",&n);
    printf("enter the values for array: \n");
    for(i=0;i<n;i++)
    scanf("%d",&num[i]);
    for(i=0;i<n-1;i+=2)
    {
        swap=num[i];
        num[i]=num[i+1];
        num[i+1]=swap;
    }
    for(i=0;i<n;i++)
    printf("%d\t",num[i]);
    return 0;
}