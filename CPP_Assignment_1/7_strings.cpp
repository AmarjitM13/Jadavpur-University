//join two strings 
#include <iostream>
#include <string.h>
using namespace std;

class String{
    public:
    char str[20];
    String(){
        cout<<"Enter string: ";
        cin>>str;
        
    }
    void display(){
        cout<<str<<endl;
    }
    
};

void concatenateString(String string1,String string2){
    cout<<"\nThe concatenated string is: "<<strcat(string1.str,string2.str);
    }

int main(){
    String string1,string2;
    cout<<"---------------------"<<endl;
    cout<<"\n\nThe first string is: ";
    string1.display();
    cout<<"\n\nThe second string is: ";
    string2.display();
    concatenateString(string1,string2);
    return 0;
}