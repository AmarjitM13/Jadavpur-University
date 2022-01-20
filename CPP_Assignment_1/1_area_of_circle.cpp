#include<iostream>
using namespace std;

class Circle
{
	private:
		double radius;
	public:
		void compute_area(double r)
		{ 
			radius = r;
			
			double area = 3.14*radius*radius;
		
			cout << "Area is: " << area;
		}
	
};

int main()
{
	double radius;
	Circle circle;
	cout<<"Enter radius: ";
	cin>>radius;
	circle.compute_area(radius);
	
	return 0;
}
