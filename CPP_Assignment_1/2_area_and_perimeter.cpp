#include<iostream>
#include<cmath>
using namespace std;
class Triangle
{
    private:
        float a, b, c, s, ar;
    public:
        void getData() {
            cout<<"Enter Length of all Three Sides: ";
            cin>>a>>b>>c;
        };
        float areaOfTriagle();
        float perimeterOfTriangle();

        void showData(float area, float perimeter) {
            cout<<"\nArea = "<<area;
            cout<<"\nPerimeter = "<<perimeter;
        };
};

float Triangle::areaOfTriagle()
{
    s = (a+b+c)/2;
    ar = sqrt(s*(s-a)*(s-b)*(s-c));
    return ar;
}
float Triangle::perimeterOfTriangle()
{
    return (a+b+c);
}
int main()
{
    Triangle c;
    float area, perimeter;
    c.getData();
    area = c.areaOfTriagle();
    perimeter = c.perimeterOfTriangle();
    c.showData(area,perimeter);
    cout<<endl;
    return 0;
}