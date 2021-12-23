//Q. Write a program to convert the capital letters of any string to small letter and vice-versa, finally print the changed string.
#include<stdio.h>
#include<string.h>


// Function to convert characters of a string to opposite case
void convertOpposite(char str[100])
{
	int ln = strlen(str);

	// Conversion according to ASCII values
	for (int i = 0; i < ln; i++) {
		if (str[i] >= 'a' && str[i] <= 'z')
			// Convert lowercase to uppercase
			str[i] = str[i] - 32;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			// Convert uppercase to lowercase
			str[i] = str[i] + 32;
	}
}

// Driver function
int main()
{
	char s1[100];

    printf("Enter your text : ");
    gets(s1);

	// Calling the Function
	convertOpposite(s1);

	printf("%s",s1);
	return 0;
}
