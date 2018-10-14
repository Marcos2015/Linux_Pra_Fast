#include <iostream>
using namespace std;


class A
{
	private: 
		A();
	public:
		static A& sofun()
		{
			A a;
			return a;
		}


};



int main()
{
	A::sofun();

return 0;
}





