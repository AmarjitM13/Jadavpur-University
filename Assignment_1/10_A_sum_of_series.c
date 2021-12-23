#include<stdio.h>

double sumOfSeries(double num){
	double res = 0, fact = 1;
	for (int i = 1; i <= num; i++)
	{
		fact = fact * i;
		res = res + (i / fact);
	}
	return(res);
}

int main()
{
	double n = 10;
	printf("Sum: %f",sumOfSeries(n));
	
	return 0;
}

