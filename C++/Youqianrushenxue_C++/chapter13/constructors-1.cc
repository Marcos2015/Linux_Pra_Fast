#include<iostream>
using namespace std;


class A
{
    public:
	A()
	{
		cout << "constructors" << endl;
	}

	A(const A& a)
	{
		cout <<"copy constructors "<< endl;
	}

	~A()
	{
		cout << "destructors"<<endl;
	}


};



A fun(A& T)
{
	cout << "In fun()"<<endl;
	A a;
	cout <<"returning fun"<<endl;
	return T;
}


int main()
{
	cout <<"In main"<<endl;
	A y;
	/*
	 A a;
	 a=fun();
	 */ // 如写成这样,则只会调用一次拷贝构造函数,调用时间在在fun()返回a时.

	/*
	 A a=fun();
	*/
	//若写成这样则会调用两次拷贝构造函数.

	
	A a=fun(y);	
	cout <<"returning main"<<endl;
return 0;
}



