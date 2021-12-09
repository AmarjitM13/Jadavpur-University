#include<stdio.h>

void getProduct(int number){
	int remainder, product = 1;
	while(number != 0)
    {
        remainder = number % 10;
        product *= remainder;
        number /=  10;
    }
	printf("\nProduct of digits: %d", product);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
	getProduct(num);
    
    return 0;
}


