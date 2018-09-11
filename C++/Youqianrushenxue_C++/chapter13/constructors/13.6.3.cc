#include <iostream>
using namespace std;

class Rectangle
{
	private:
		double length,width;
	public:
		Rectangle(double a,double b);
		void area()
		{
			cout << "Area of Rectangle is: "<<length*width<<endl;
		}
};



Rectangle::Rectangle(double a,double b)
{
	length=a;
	width=b;
}


int main()
{
	Rectangle Rect(1.5,3.0);
	Rect.area();

	return 0;
}



