#include <iostream>
using namespace std;


class Test_A
{
	private: 
		int x,y;
	public:
		void setX(int a)
		{
			x=a;
		}

		void setY(int b)
		{
			y=b;
		}


		int getxy(int* px,int* py)
		{
			*px=x;
			*py=y;
		}



};



int main()
{
	Test_A hello;
	hello.setX(10);
	hello.setY(20);
	int a,b;
	hello.getxy(&a,&b);
//	cout << "hello.x=" << hello.x << endl;
//	cout << "hello.y=" << hello.y << endl;

	cout << "a=" <<  a  << endl;
	cout << "b=" <<  b  << endl;

	cout << Test_A.a << endl;


return 0;
}






