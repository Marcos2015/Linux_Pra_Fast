#include <iostream>
using namespace std;


struct Dot
{
	int a;
	int b;
	void print()
	{
		cout << "a= " <<a<<endl;
		cout << "b= " <<b<<endl;
	}
};


int main()
{
	Dot dot;
	dot.a=1;
	dot.b=2;
	dot.print(); 

return 0;
}



