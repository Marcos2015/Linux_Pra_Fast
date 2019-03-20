#include <iostream>
using namespace std;

class Rectangle
{
	private:
		int x,y;

	public:
		Rectangle(int a,int b);
		friend void to(Rectangle & Y);
		int show();
};


Rectangle::Rectangle(int a,int b)
{
	x=a;
	y=b;
}

int Rectangle::show()
{
	cout <<"x="<<x<<" " <<"y="<<y<<endl;
	return 0;
}


void to(Rectangle & Y)
{
	cout << Y.x * Y.y <<endl;
}



int main()
{
	Rectangle R1(4,8);
	cout<<R1.x<<endl;
	R1.show();
	to(R1);
return 0;
}


