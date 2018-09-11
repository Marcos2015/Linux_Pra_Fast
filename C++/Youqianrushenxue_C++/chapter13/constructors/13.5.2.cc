#include <iostream>
using namespace std;

class Dot
{
private:
	int a;
	int b;
public:
	void print()
	{
		cout << "a= " << a << endl;
		cout << "b= " << b << endl;
	}
};


int main()
{
	Dot dot;
	dot.print();
    return 0;
}

