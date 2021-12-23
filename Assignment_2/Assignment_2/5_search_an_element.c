#include <stdio.h>
 
int search(int arr[],int len,int num){
 
     int i;
 
     /* Traverse an array */
     for(i = 0;i < len; i++){
        
        /* If number is found, return it's index. */
         if(arr[i] == num) {
             return i;
             break;
          }
      }
    
    return -1;
}
int main(void) {
 
    int arr[] = {1,3,5,6,7,8,9};
 
    /* Suppose we have to find 10 .*/
    int num = 10;
    int size = sizeof(arr)/sizeof(arr[0]);
 
    int pos;
 
    pos = search(arr,size,num);
    
    if(pos == -1){
        printf("Number is not found");
     } else {
        printf("Number is found at %d position",pos);
     }
     
 return 0;
}