#include <iostream>
using namespace std;

class Base
{
	protected:
		int x=1;
	public:
		Base()
		{
			cout << "constructing Base x=" << x << endl;
		}
};


class Base1:virtual public Base
{
	public:
		Base1()
		{
			cout << "constructing Base1,x=" << x << endl;
		}
};

class Base2:virtual public Base
{
	public:
		Base2()
		{
			cout << "constructing Base2 x=" << x << endl;
		}

};



class Derived:public Base1,public Base2
{
	public:
		Derived()
		{
			cout <<"constructing Derived x=" << x << endl;
		}
};


 





int main()
{
	Derived obj;
return 0;
}



