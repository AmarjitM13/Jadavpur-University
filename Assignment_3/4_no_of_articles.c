#include<stdio.h>
#include<string.h>

int main() {

	char str[300];
	char *token;
	int c_a,c_an,c_the;
	c_a = c_an = c_the = 0; 
	
	printf("Enter String: ");
	gets(str);
	
	token = strtok(str, " .,");
	
	while(token!=NULL){
		if(strcmp(token, "a")==0 || strcmp(token, "A")==0){
			c_a++;
		}
		else if(strcmp(token, "an")==0 || strcmp(token, "An")==0){
			c_an++;
		}
		else if(strcmp(token, "the")==0 || strcmp(token, "The")==0){
			c_the++;
		}
		token = strtok(NULL, " .,");
	}
	
	printf("Number of \"a\": %d\n", c_a);
	printf("Number of \"an\": %d\n", c_an);
	printf("Number of \"the\": %d\n", c_the);
	
}