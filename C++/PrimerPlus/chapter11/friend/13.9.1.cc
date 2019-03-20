#include <iostream>
using namespace std;

class Rectangle
{
	double length,width;
	public:
		Rectangle( double a = 0, double b = 0)
		{
			length =  a;
			width = b;
		}
	
	Rectangle( Rectangle & r);

	double getlength()
	{
		return length;
	}

	double getwidth()
	{
		return width;
	}


friend double area( Rectangle &rectangle);

};


double area( Rectangle &rectangle)
{
	return ( rectangle.length*rectangle.width);
}



	int main()
	{
		Rectangle ob(4,5);
		cout << "the area is : " << area(ob) << endl;
	return 0;
	}




	
