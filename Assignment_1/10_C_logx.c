#include <stdio.h>
#include <math.h>

long factorial(int n)
{
  if (n == 0)
    return 1;
  else
    return(n * factorial(n-1));
}

int main()
{
    float x,initial,sum=0;
	int i,j,limit;

	printf("Enter the value of x of log series: ");
	scanf("%f",&x);

	printf("Enter the limit upto which you want to expand the series: ");
	scanf("%d",&limit);

	initial=x;
	x = x*(3.1415/180);

	for(i=1,j=1;i<=limit;i++,j=j++)
	{
		if(i%2!=0)
		{
			sum=sum+pow((x-1),j)/factorial(j);
		}
		else
			sum=sum-pow((x-1),j)/factorial(j);
	}

	printf("log(%0.1f): %f",initial,sum);
	return 0;
}
