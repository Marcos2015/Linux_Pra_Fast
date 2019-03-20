#include <iostream>
using namespace std;


class A
{
	public:
		A()=default;
		A(int j):x(j)
		{
			cout << "x=" << x << endl;
		}



		int get_x()
		{
			return x;
		}

	private:
		int x;
};



int main()
{
	A Stock(100);

	A Test(80);


	Stock=Test;

	cout << Stock.get_x() << endl;


return 0;
}


