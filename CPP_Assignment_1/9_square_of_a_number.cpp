#include<iostream>
using namespace std;

inline int sqr(int x)
{
    return x*x;
}

int main()
{
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    cout<<"Square of the number : "<<sqr(x);
    return 0;
}