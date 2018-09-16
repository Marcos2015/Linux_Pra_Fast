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

		int get_a()
		{
			return a;
		}


/*
		void get_f()
		{
			return f;
		}
*/
	protected:
		int f=10;


};

class Driver:public Base
{
	private:
		int b;
	public:
		void initb(int y)
		{
			b=y;
		}

		int get_a_b()
		{
			return b*get_a();
		}

		int get_f()
		{
			cout << f << endl;
			return f;

		}

};



int main()
{
	Driver b;
	b.inita(7);
	b.initb(6);
    cout << b.get_a_b() << endl;

    cout << b.Base::get_a() << endl;
	cout << b.get_f() << endl;
    return 0;

}


	
