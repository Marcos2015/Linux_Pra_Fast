#include <iostream>
using namespace std;


class dot
{
	public:
		dot();
		dot(double a,double b);
		void showdot();

	private:
		double x,y;
};


dot::dot()
{
	x=100;
	y=900;
}

dot::dot(double a,double b=7)
{
	x=a;
	y=b;
}

void dot::showdot()
{
	cout << "x=" << x  << " " << "y=" << y <<endl;
}



int main()
{
	dot dot1;
	dot1.showdot();
	dot dot2(1.4,9.0);
	dot2.showdot();
return 0;
}

