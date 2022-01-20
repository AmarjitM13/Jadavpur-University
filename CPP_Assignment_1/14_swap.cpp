#include <iostream>

using namespace std;

class Swap {
	int num;

public:
	Swap(int num)
	{
		this->num = num;
	}
	friend void swap(Swap&, Swap&);
};

void swap(Swap& s1, Swap& s2)
{
	
	cout << "\nBefore Swapping: " << s1.num << " " << s2.num;
	s1.num = s1.num + s2.num;
	s2.num = s1.num - s2.num;
    s1.num = s1.num - s2.num;
    
	cout << "\nAfter Swapping: " << s1.num << " " << s2.num;
}

int main()
{
	Swap s1(6), s2(10);
	swap(s1,s2);
	return 0;
}
