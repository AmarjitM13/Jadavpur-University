#include<stdio.h>
#include<math.h>

float interest(float p, float r){
	return (p*r)/100;
}


int main(){
	int selected_index;
	printf("Select : \n");
	printf("1. Compound Interest \n");
	printf("2. Interest \n");
	scanf("%d", &selected_index);

	float principal, rate_of_interest, amt=0, total;
	int time;

	switch(selected_index){
	case 1:
		printf("Calculate Compound Interest\n");
		printf("Enter Principal: ");
		scanf("%f", &principal);
		printf("Enter rate of interest: ");
		scanf("%f", &rate_of_interest);
		printf("Enter time in years: ");
		scanf("%d", &time);
		for(int i=1; i<=time; i++){
			amt = principal + interest(principal, rate_of_interest);
			printf("total amount at the end of %d year = %0.2f  \n", i, amt);
			principal=amt;
		}
		break;
	case 2:
		printf("Calculate Rate of Interest\n");
		printf("Enter Principal: ");
		scanf("%f", &principal);
		printf("Enter total amount at the end of n-th year: ");
		scanf("%f", &total);
		printf("Enter time in years: ");
		scanf("%d", &time);
		printf("Rate of compound interest: %0.2f", (pow((total/principal),(1.0/time)) -1)* 100);
		break;
	default:
		printf("wrong choice");

	}
	return 0;
}
