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


		void initc(int k)
		{
			c=k;
		}


		int getc()
		{
			return c;
		}



	protected:
		int c;

};






int main()
{
	Derived ob;
	ob.inita(18);
	ob.initb(30);
	ob.initc(100);
	cout <<" return c = "<< ob.getc() << endl;
	cout << "the b*geta()= "<< ob.getb()<< endl;
return 0;
}



