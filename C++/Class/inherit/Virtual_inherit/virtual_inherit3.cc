#include <iostream>
using namespace std;


class A
{
	public:
		int a;
		A(int a=0):a(a)
		{
			cout << "A::A()"<< endl;
		}

		~A()
		{
			cout <<"A::A()"<< endl;
		}

void show()
{
	cout <<"A::a=" << a<< endl;
}


};






class B:virtual public A
{
	protected:
		int b;
	public:
		B(int a=0,int b=0):A(a),b(b)
		{
			cout <<"B::B()"<< endl;
		}

		~B()
		{
			cout <<"B::~B()"<< endl;
		}

void show()
{
	cout <<"B::b="<<b<< endl;

}

};





class C:virtual public A
{
	protected:
		int c;
	public:
		C(int a=0,int c=0):A(a),c(c)
		{
			cout << "C::C()" << endl;
		}


		~C()
		{
			cout <<"C:~C()"<< endl;
		}


void show()
{
		cout <<"C::c="<<c<< endl;
}


};





class D:public B,public C
{
	protected:
		int d;
	public:
		D(int a=0,int b=0, int c=0,int d=0):d(d),B(a,b),C(a,c)
		{
			cout << "D::D()" << endl;
		}

		~D()
		{
			cout << "D::~D()" << endl;
		}



void show()
{
	cout << "D:: d=" << d << endl;
}


};





void Display(A*p)
{
	p->show();
}


int main()
{
	A a(1);
	B b(2,3);
	C c(4,5);
	D d(6,7,8,9);


	A*p;
	p=&a;
	p->show();//p是指向子类对象的父类指针，但是该函数show()并不是虚函数，所以该指针仍指向父类部分，调用父类的show()函数，即类A的show();若将类A中的show()声明为virtual void show();则p指向子类的show()函数。

	p=&b;
	p->show();


	p=&c;
	p->show();




return 0;
}






