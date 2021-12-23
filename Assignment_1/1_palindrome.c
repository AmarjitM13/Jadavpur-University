#include <stdio.h>
#include <string.h>

int main() {
	
  int num = 0, reversedNum = 0, remainder = 0, original = 0;
  char str[50];

    printf("Enter an integer: ");
    scanf("%d", &num);
    original = num;
    
    sprintf(str, "%d", num);
    printf ("\nReverse of %d is %s\n",num, strrev(str)); 
    

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    
     
    if (original == reversedNum)
        printf("\nSo %d is a palindrome.", original);
    else
        printf("\nSo %d is not a palindrome.", original);

    return 0;
}
