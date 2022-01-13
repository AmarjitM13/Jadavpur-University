#include <stdio.h>

struct struct_example
{
	int id;
	float salary;
};

union union_example
{
	int id;
	float salary;
};

int main()
{
	struct struct_example s={1,38};
	union union_example u={2};

	printf("\nsizeof structure : %d\n", sizeof(s));
	printf("sizeof union : %d\n", sizeof(u));

    return 0;
}
