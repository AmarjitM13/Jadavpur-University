#include <stdio.h>

// Function to get the immidiate next character
void getNextAlphabet(char str[100]){

    for(int i=0; str[i]!='\0'; i++)
        {
            if(str[i]>='a' && str[i]<='y')
            {
                str[i] = str[i] +1;
            }
            else if(str[i] == 'z')
            {
                str[i] = 'a';
            }
            else if (str[i] >= '0' && str[i] <= '8')
            {
                str[i] = str[i] + 1;
            }
            else if (str[i] == '9')
            {
                str[i] = '0';
            }
        }
}

int main()
{
    char str[100];

    // Input string from user
    printf("Enter your text : ");
    gets(str);

    // Calling the Function
    getNextAlphabet(str);

    printf("\nNew string : %s",str);
    return 0;
}