#include <iostream>
using namespace std;

class Base1
{
	public:
		int x;
		void print()
		{
			cout << "class Base1:x=" << x << endl;
		}

};


class Base2
{
	public:
		int x;
		void print()
		{
			cout << "class Base2: x=" << x << endl;
		}

};



class Derived:public Base1,public Base2
{
	public:
		int x;
		void print()
		{
			cout << "class Derived : x=" << x << endl;
		}
};



int main()
{
		Derived ob;
		ob.x=10;
		ob.print();

		ob.Base1::x=20;
		ob.Base1::print();


		ob.Base2::x=30;
		ob.Base2::print();




return 0;
}

