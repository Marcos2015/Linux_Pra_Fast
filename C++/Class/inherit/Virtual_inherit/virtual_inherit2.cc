#include <iostream>
using namespace std;

class A
{
	public:
		int n;
		A(int m):n(m)
		{
			cout << "constructing A object n=" << n << endl;
		}

};




class B:virtual public A
{
	public:
	B(int m):A(m)
	{
		cout << "cpnstructing B object n=" << n << endl;
	}

};

class C:virtual public A
{
	public:
	C(int h):A(h)
	{
		cout << "constructing C object n=" << n << endl;
	}

};




class Derived:public B,public C
{
public:
//	Derived(int F):B(F),C(F) 由于A定义了有参数的构造函数，所以无法使用默认的无参构造函数，必须传递参数进行构造对象A
	Derived(int F):B(F),C(F),A(F)
	{
		cout << "constructing Derived object n=" << n << endl;
	}

};


int main()
{
	Derived Derived1(100);
return 0;
}








