#include <iostream>
using namespace std;


class Rectangle
{
	public:
		Rectangle(double a,double b);

	private:
		int g;
};


Rectangle::Rectangle(double a,double b)
{
	g=a*b;
	cout << g << endl;
}


int main()
{
	Rectangle u(5,9);
	return 0;
}


