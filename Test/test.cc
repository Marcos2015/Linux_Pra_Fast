#include <iostream>
using namespace std;


void swap(int &x, int &y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
};



int main()
{
	int a = 2;
	int b = 3;

	printf("a=%d,b=%d\n",a,b);
	int &x = a;
	int &y = b;

		swap(x, y);
	printf("a=%d,b=%d\n",a,b);
return 0;
}


