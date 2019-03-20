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


A gun(A Y)
{
	return Y;
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

	
//	A a=fun(y);	

	//gun(y);
	A b=gun(y); //参数y传入gun的时候调用一次拷贝构造函数,返回参数Y的时候已经
	            //销毁了参数Y,但是在这个时候调用拷贝构造函数构造了一个临时对象
		    //这是第二次调用拷贝构造函数.
		    //当gun(y)赋值给A的时候,又调用一次拷贝构造函数.一共三次调用
		    //拷贝构造函数,但gcc编译的时候必须加上-fno-elide-constructors.
	cout <<"returning main"<<endl;
return 0;
}



