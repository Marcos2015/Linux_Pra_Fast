#include <iostream>
using namespace std;


class A
{
	private: 
		A(){};//必须记得加上{},不然编译直接出错,当时找了两个半小时的bug才知道错误.
	public:
		static A& sofun()
		{
			static A a;
			return a;
		}
		
		static A* si()
		{
			A* test=new A();
			return test;
		}


};



int main()
{
	A::sofun();
	A::si();

return 0;
}





