//join two strings 
#include <iostream>
#include <string.h>
using namespace std;

class stringClass{
    public:
    char str[20];
    stringClass(){
        cout<<"Enter string: ";
        cin>>str;
        
    }
    void display(){
        cout<<str<<endl;
    }
    
};

void joinString(stringClass obj1,stringClass obj2){
    cout<<"\nThe concatenated string is: "<<strcat(obj1.str,obj2.str);
    }

int main(){
    stringClass obj1,obj2;
    cout<<"---------------------"<<endl;
    cout<<"\n\nThe first string is: ";
    obj1.display();
    joinString(obj1,obj2);
    return 0;
}