#include <iostream>
using namespace std;

class dot
{
	private:
		int x,y;

	public:
		dot(int a,int b)
		{
			x=a;
			y=b;
		}

		dot(dot & T)
		{
			x=T.x+10;
			y=T.y+100;
			cout << "调用拷贝构造函数"<<endl;
		}


		int get_x()
		{
			return x;
		}

		int get_y()
		{
			return y;
		}


		void showdot()
		{
			cout << "x=" << x <<" " << "y=" << y <<endl;
		}

};




void f(dot p)
{
	cout << p.get_x() <<"  "<< p.get_y() << endl;
}



dot g()
{
	dot q(3,5);
	return q;
}



int main()
{
	dot dot1(8,4);
	dot1.showdot();
	dot dot2(dot1);
	dot2.showdot();

	f(dot2);
	dot2=g();
	cout << dot2.get_x() << "  " << dot2.get_y() << endl;	
return 0;
}


