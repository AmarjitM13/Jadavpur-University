#include<iostream>
using namespace std;
class time
{
  private:
      int h;
      int m;
      int s;
  public:
      friend istream& operator>>(istream&,time&);
      friend ostream& operator<<(ostream&,time);
      int operator==(time t2)
      {
          if(h==t2.h && m==t2.m && s==t2.s)
            return(1);
          else
            return(0);
      }
      time operator+(time t2)
      {
          time temp;
          temp.h=h+t2.h;
          temp.m=m+t2.m;
          temp.s=s+t2.s;
          if(temp.m>60)
          {
              temp.m=temp.m-60;
              temp.h=temp.h+1;
          }
          if(temp.s>60)
          {
              temp.s=temp.s-60;
              temp.m=temp.m+1;
          }
          return(temp);
      }

};
istream& operator>>(istream &din,time &t)
{
    cout<<"enter time in hour/minute/second format :";
    cin>>t.h>>t.m>>t.s;
    return(din);
}
ostream& operator<<(ostream &dout,time t)
{
    cout<<t.h<<" hour "<<t.m<<" minute "<<t.s<<" second "<<endl;
    return(dout);
}
int main()
{
    time t1,t2;
    cin>>t1;
    cin>>t2;
    cout<<"sum of the times are :";
    cout<<t1+t2;
    if(t1==t2)
        cout<<"times are same";
    else
        cout<<"times are different";
}