// CPP program to print
// the sum of series
#include<stdio.h>

// function to calculate
// sum of given series
double sumOfSeries(double num)
{
	double res = 0, fact = 1;
	for (int i = 1; i <= num; i++)
	{
		// fact variable store
		// factorial of the i
		fact = fact * i;

		res = res + (i / fact);
	}
	return(res);
}

// Driver Code
int main()
{
	double n = 5;
	printf("Sum: %f",sumOfSeries(n));
	
	return 0;
}

