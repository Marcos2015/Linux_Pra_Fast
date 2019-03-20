#include <iostream>
using namespace std;



class Point
{
	protected:
		int x0;
		int y0;
	public:
		Point(int i=0,int j=0)
		{
			x0=i;
			y0=j;
		}


		virtual void set()=0;
		virtual void draw()=0;
};



class Line:public Point
{
	protected:
		int x1,y1;
	public:
		Line(int i=0,int j=0,int m=0,int n=0):Point(i,j)
		{
			x1=m;
			y1=n;
		}

//		virtual void set() 纯虚函数的实现可以在前面加virtual关键字
		void set()
		{
			cout << "Line::set() called" << endl;
		}

		void draw()
		{
			cout << "Line::draw() called" << endl;
		}

};






class Ellipse:public Point
{
	public:
		Ellipse(int i=0,int j=0,int p=0,int q=0):Point(i,j)
		{
			x2=p;
			y2=q;
		}

		void set()
		{
			cout << "Ellipse::set() called" << endl;
		}

		void draw()
		{
			cout << "Ellipse::set() called" << endl;
		}

protected:
	int x2,y2;
};







void drawobj(Point* p)
{
	p->draw();
}


void setobj(Point* q)
{
//	q->set();
}





int main()
{
		//Point* p=new Point;纯虚函数不能实例化，set(),draw()不能实例化，会报错。
		Line* lineobj=new Line;
		Ellipse* elliobj=new Ellipse;


		drawobj(lineobj);
		setobj(lineobj);


return 0;
}



		
