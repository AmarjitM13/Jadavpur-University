#include<stdio.h>


/* Function prototype */
void desc_sort(int a[10], int n)
{
 int i, j, temp;
 for(i=0;i< n-1;i++)
 {
  for(j=i+1;j< n;j++)
  {
   if(a[i]< a[j])
   {
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
   }
  }
 }
}

int main()
{
 int a[100], i, n;

 printf("Enter n:\n");
 scanf("%d", &n);
 
 /* Reading array */
 for(i=0;i< n;i++)
 {
  printf("a[%d]=",i);
  scanf("%d", &a[i]);
 }
 
 /* Function Call */
 desc_sort(a,n);
 
 /* Displaying sorted array */
 printf("Array in descending order is:\n");
 for(i=0;i< n;i++)
 {
  printf("%d\t", a[i]);
 }


return 0;
}