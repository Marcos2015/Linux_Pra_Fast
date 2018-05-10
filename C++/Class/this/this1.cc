#include <iostream>
using namespace std;

class Point
{
public:
	Point(int a,int b)
	{
		this->x=a;
		this->y=b;
	}

	void MovePoint( int a, int b)
	{
			x+=a;
			y+=b;
	}

	void print()
	{
		cout << "x= " << x <<","<< "y= " << y << endl;
	}




private:
	int x;
	int y;


};



int main()
{
	Point point1(10,10);
	point1.MovePoint(2,2);
	point1.print();
return 0;

}
