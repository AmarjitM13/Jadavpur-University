#include <iostream>
using namespace std;

class leap{
    public:
    leap(int year){
        if(year%4==0){
            cout<<year<<" is a leap year."<<endl;
        }
        else
            cout<<year<<" is not a leap year."<<endl;
    }

    ~leap(){
        cout<<"Destructor called.";
    }
};

int main(){
    int year;
    cout<<"Enter the year to be checked: ";
    cin>>year;
    leap obj(year);
    return 0;
}