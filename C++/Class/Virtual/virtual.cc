#include <iostream>
using namespace std;

class Object1
{
	public:
		virtual void f()
		{
			cout << "function f in class-1" << endl;
		}

		void g()
		{
			cout << "function g in class-1" << endl;
		}

};



class Object2
{
	public:
		virtual void f()
		{
			cout << "function f in class-2" << endl;
		}

		void g()
		{
			cout << "function g in class-2" << endl;
		}

};
		


class Object3
{
	public:
		virtual void h()
		{
			cout << "function h in class-3" << endl;
		}
};



int main()
{
	Object1 Hello1,*p;
	Object2 Hello2;
	Object3 Hello3;


	p=&Hello1;
	p->f();
	p=(Object1*)&Hello3;
	p->h();



	
	
return 0;
}



