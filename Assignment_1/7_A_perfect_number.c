/*C program to check whether the given number is the Perfect number*/  
#include<stdio.h>  
 
int main()  
{  
  
int num, rem, sum = 0, i,divisors;  
 
printf("Enter a number: ");
scanf("%d", &num);      

for(i = 1; i < num; i++)  {
rem = num % i;
if (rem == 0){
divisors++;
sum = sum + i;
}
}
printf("\nNo of Divisors: %d", divisors);
if (sum == num)  
printf("\n%d is a Perfect Number", num);
else
printf("\n%d is not a Perfect Number", num);
return 0;

}  
