#include <iostream>
using namespace std;


class A
{
    public:
	A()=default;
	A(int a):x(a)
	{
		cout << "x=" << x << endl;
	}


	

	private:
	    int x;
};


int main()
{
	A k=A(68);

return 0;
}


