#include <iostream>
using namespace std;

class A
{
	public:
		int a;
		char b;
			vitual void fun()
			{
				cout << "A::fun() is calling:" << endl;
			}

			virtual void gun()
			{
				cout <<"A::gun() is calling::" << endl;
			}

};



class B:class A
{
	public:
		virtual void fun()
		{	
			cout << "B::fun() is calling::" << endl;
		}

		virtual void kun()
		{
			cout << "B::kun is calling::"<< endl;
		}

};


class C:public B
{
		virtual void fun()
		{
			cout << "C::fun() is calling::" << endl;
		}

		virtual void qun()
		{
			cout << "C::qun() is calling::"<< endl;
		}

};






class D:class A
{
	virtual void xun()
	{
		cout <<"D::xun() is calling::"<< endl;
	}

	virtual void yun()
	{
		cout <<"D::yun() is calling::" << endl;
	}

};





class E:public C,public D
{
	public:
		int e;

		virtual void fun()
		{
			cout <<"E:: fun() is calling ::" << endl;
		}

		virtual void yun()
		{
			cout <<"E::yun() is calling::"<< endl;
		}


		virtual void zun()
		{
			cout << "E::zun() is calling::"<< endl;
		}


};




