#include <iostream>
using namespace std;

class Rectangle
{
public:
	Rectangle(double a=0,double b=0)
	{
		length = a;
		width = b;
	}

Rectangle(Rectangle &r);


double getlength()
{
	return length;
}



double getwidth()
{
	return width;
}


friend double area(Rectangle &rectangle);



private:
		double length;
		double width;


};







double area(Rectangle &rectangle)
{
	return (rectangle.length* rectangle.width);
}



int main()
{
	Rectangle ob(4,5);
	cout << "The area is:"<< area(ob) << endl;

return 0;
}







