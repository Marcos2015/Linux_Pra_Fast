#include <iostream>
using namespace std;

class A
{
	private:
		static char a;//被全体对象共享，不属于具体某个对象
		int b;
		char c;
	public:
		A(int b=0,char c=0):b(b),c(c){}
		~A(){}
		void fun(){}//被全体对象共享，不属于具体某个对象
};


class B
{
	private:
		char a;
		int b;
		char c;
	public:
		B(int b=0,char c=0):b(b),c(c){}
		~B(){}
		virtual void fun(){}
		virtual void gun(){}
};




int main()
{
	cout << "sizeof class A:"<<sizeof(A)<<" bytes"<< endl;
	cout << "sizeof class B:" <<sizeof(B)<<" bytes"<<endl;
return 0;
}



