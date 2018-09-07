#include <iostream>
using namespace std;

class dot
{
	private:
		int x,y;
	public:
		dot(int a,int b);
		dot(dot &T);
		void showdot();
};

dot::dot(int a,int b)
{
	x=a;
	y=b;
}

dot::dot(dot &T)
{
	x=T.x+100;
	y=T.y+9;
}


void dot::showdot()
{
	cout << "x=" << x << "  " << "y=" << y << endl;
}


int main()
{
    dot dot1(9,8);
    dot1.showdot();

    dot dot2(dot1);
    dot2.showdot();

return 0;
}


