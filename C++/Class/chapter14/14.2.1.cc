#include <iostream>
using namespace std;


class Base
{
	private:
		int a;
	public:
		void inita(int x)
		{
			a=x;
		}

		int geta()
		{
			return a;
		}

};

class Derived:public Base
{
	private:
		int b;
	public:
		void initb(int y)
		{
			b=y;
		}

		int getb()
		{
			return b*geta();
		}

};


int main()
{
	Derived ob;
	ob.inita(12);
	Derived oa;
	oa.inita(200);
	cout << oa.geta() << endl;
	cout << ob.geta() << endl;
return 0;
}


