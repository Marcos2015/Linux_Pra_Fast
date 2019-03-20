#include <iostream>
using namespace std;

class Base
{
	private:
		int x,y;
	public:
		Base(int aa,int bb)
		{
			x=aa;
			y=bb;
		}

	int area(int x,int y)
	{
		return x*y;
	}

};



class child:public Base
{
	private:
		int h,y;

	public:
		child(int kk,int yy,int pp,int uu ):Base(pp,uu)
		{
			h=kk;
			y=yy;
		}

		int area(int x,int y)
		{
			cout << "this child area()"<< endl;
			return x*y;
		}
};




int main()
{
	child child1(100,200,300,400);
	cout << child1.Base::area(12,13)<< endl;/*用"对象名.类名::函数名()"调用父类6
	或子类中的同名函数。*/
		Base Base1(10,20);
//		Base* b1 = &child1;
		Base* b1;
			(child*)b1 = &child1;
			b1->area(88,89);


return 0;
}



