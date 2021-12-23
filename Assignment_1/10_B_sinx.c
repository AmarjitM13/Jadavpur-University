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
	float x,x_in_degree,sum=0;
	int i,j,limit;

	printf("Enter the value of x(in degree) of sinx series: ");
	scanf("%f",&x);

	printf("Enter the limit upto which you want to expand the series: ");
	scanf("%d",&limit);

	x_in_degree=x;
	x = x*(3.1415/180);

	for(i=1,j=1;i<=limit;i++,j=j+2)
	{
		if(i%2!=0)
		{
			sum=sum+pow(x,j)/factorial(j);
		}
		else
			sum=sum-pow(x,j)/factorial(j);
	}

	printf("Sin(%0.1f): %f",x_in_degree,sum);
	return 0;
}
