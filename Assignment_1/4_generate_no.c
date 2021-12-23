#include <stdio.h>
#include <math.h>
int length(int);
int reverse(int);
int reverse(int n){
    int last_dig,rev=0;
    while(n!=0){
        last_dig=n%10;
        rev=rev*10+last_dig;
        n=n/10;
    }
    return rev;
}
int length(int num){
    int count=0,last_digit;
    while(num!=0){
        last_digit=num % 10;
        count++;
        num=num/10;
    }
    return count;
}
int main(){
    int x,y,i,j,len_x,len_y,ld=0,rev_x,rev_y;
    double z;
    printf("Enter first number: ");
    scanf("%d",&x);
    printf("Enter second number: ");
    scanf("%d",&y);
    len_x=length(x);
    rev_x=reverse(x);
    len_y=length(y);
    rev_y=reverse(y);
    for(i=0;i<len_x;i++){
        if(i%2==0){
            ld=rev_x % 10;
            if(i==0){
                z=ld;
            }
            if(i!=0){
            z=z+ld*pow(10,i);
            }
        }
        rev_x=rev_x/10;
    }
    ld=0;
    for(j=0;j<len_y;j++){
        if(j%2!=0){
            ld=rev_y%10;
            z=z+ld*pow(10,j);
            }
    
        rev_y=rev_y/10;
    }
    z=(int)z;
    printf("\nThe new integer is %d",reverse(z));
    

    return 0;
}