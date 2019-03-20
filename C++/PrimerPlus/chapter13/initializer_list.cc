#include <iostream>
using namespace std;

class point
{
	private:
		int x,y;
	public:
	
		point(int m=0,int n=0);
		
/*
point(int m=0,int n=0):x(m),y(n)
{
}
*/
	
	/*	
		point( int m=0,int n=0)
		{
			x=m;
			y=n;
		}
	*/

		int GetX()
		{
			return x;
		}

		int GetY()
		{
			return y;
		}

};

	int main()
	{
		return 0;
	}



point::point(int m,int n):x(m),y(n)
{
}
//成员列表初始化时，首先在类中声明构造函数，可在构造函数的参数设置好默认值，但不必实现该函数；在类外实现该构造函数时，参数不需写默认值,仅需写参数参数即可,int m,int n;之后在写实现(即成员列表初始化).


