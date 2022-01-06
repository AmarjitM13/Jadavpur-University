#include<stdio.h>
#include<math.h>
#include <string.h>


void getStrlen() {
    char str[100];
    int i;

   // Input string from user
    printf("Enter your text : ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; ++i);
    
    printf("Length of the string: %d", i);
}


void  getStrcpy(){
    char s1[100], s2[100], i;
    printf("Enter string s1: ");
    scanf("%s", s1);

    for (i = 0; s1[i] != '\0'; ++i) {
        s2[i] = s1[i];
    }

    s2[i] = '\0';
    printf("String s2: %s", s2);

}


void  getStrcat(){
  
  char s1[100] = "programming ", s2[] = "is awesome";
  int length, j;

  // store length of s1 in the length variable
  length = 0;
  while (s1[length] != '\0') {
    ++length;
  }

  // concatenate s2 to s1
  for (j = 0; s2[j] != '\0'; ++j, ++length) {
    s1[length] = s2[j];
  }

  // terminating the s1 string
  s1[length] = '\0';

  printf("After concatenation: ");
  puts(s1);

}


void  getStrrev(){
   char string[20],temp;
   int i,length;
   printf("Enter String : ");
   scanf("%s",string);
   length=strlen(string)-1;
   for(i=0;i<strlen(string)/2;i++){
      temp=string[i];
      string[i]=string[length];
      string[length--]=temp;
   }
   printf("\nReverse string :%s",string);
}

void  getStrcmp(){
char str1[20];  // declaration of char array  
   char str2[20];  // declaration of char array  
   int value; // declaration of integer variable  
   printf("Enter the first string : ");  
   scanf("%s",str1);  
   printf("Enter the second string : ");  
   scanf("%s",str2);  
   // comparing both the strings using strcmp() function  
   value=strcmp(str1,str2);  
   if(value==0)  
   printf("strings are same");  
   else  
   printf("strings are not same");  
}


int main(){

	int selected_index;

	printf("Select : \n");
	printf("1. Strlen() \n");
	printf("2. Strcpy() \n");
  printf("3. Strcat() \n");
  printf("4. Strrev() \n");
  printf("5. Strcmp() \n");
	scanf("%d", &selected_index);

	switch(selected_index){
	case 1:
		getStrlen();
		break;
	case 2:
    getStrcpy();
		break;
  case 3:
    getStrcat();
    break;
  case 4:
    getStrrev();
    break;
  case 5:
    getStrcmp();
    break;
	default:
		printf("wrong choice");

	}
	return 0;
}
