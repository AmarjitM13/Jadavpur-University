#include <iostream>
using namespace std;

//finds reverse of the number
void reverse(int m){
    int lastDigit,revNum=0;
    while(m!=0){
        lastDigit=m%10;
        revNum=revNum*10 + lastDigit;
        m=m/10;
    }
    cout<<"The reverse of the number is: "<<revNum<<endl;
}

//function to check prime
void checkPrime(int m){
    int i,flag=0;
    for(i=2;i<m/2;i++){
        if(m%i==0)
            flag++;
    }
    if(flag==0)
        cout<<m<<" is Prime number."<<endl;
    else
        cout<<m<<" is not a Prime number."<<endl;
}

//function to check palindrome
void checkPalindrome(int a){
    int num=a,lastDigit,revNum=0;
    while(num!=0){
        lastDigit=num%10;
        revNum= revNum*10 + lastDigit;
        num=num/10;
    }
    if(revNum==a)
        cout<<a<<" is Palindrome."<<endl;
    else
        cout<<a<<" is not Plaindrome."<<endl;
}


void power(int a, int b){
    int product=1,i;
    for(i=0;i<b;i++){
        product*=a;
    }
    cout<<a<<" to the power "<<b<<" : "<<product<<endl;
}

void calculate(int m, char ch){
    if(ch=='r'){
        reverse(m);
    }
    if(ch=='p'){
        checkPrime(m);
    }
}

void calculate(int a, int b, char ch){
    if(ch=='p'){
        checkPalindrome(a);
    }
    else{
        power(a,b);
    }
}

int main(){
    int ch,m,a,b;
    char choice;
    cout<<"Enter your choice: "<<endl;
    cout<<"1.Reverse digit of an integer."<<endl;
    cout<<"2.Check whether a number is prime."<<endl;
    cout<<"3.Check Palindrome."<<endl;
    cout<<"4.Power of a number."<<endl;
    cin>>ch;
    if(ch==1||ch==2){
        if(ch==1){
            choice='r';
        }
        else{
            choice='p';
        }
        cout<<"Enter an integer: ";
        cin>>m;
        calculate(m,choice);
    }

    else{
        if(ch==3)
            choice = 'p';
        else
            choice= 'l';
        cout<<"Enter two integers: ";
        cin>>a>>b;
        calculate(a,b,choice);
    }
    return 0;
}