#include <iostream>
using namespace std;


class Test
{
	private:
		int y;
		void private_Test()
		{
			cout << "x=" << x << endl;
		}
		
		int x;
	public:
		// int y; //将数据成员放在public违反数据封装原则,当然可以用,但应放在private.

		Test(int g,int k)
		{
			y=g;
			x=k;
		}

		void disp()
		{
			private_Test();
			cout << "y=" << y << endl;
			//cout << "x=" << x << endl;
		}

};



int main()
{
	Test t1(19,33);
	//t1.x=100;//私有成员不允许在外部访问
	//t1.y=100;
//	t1.private_Test();  私有成员函数不允许函数外部访问
	t1.disp();


return 0;
}


