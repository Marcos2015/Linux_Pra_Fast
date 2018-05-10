#include <iostream>
//#include <string.h>
using namespace std;


class DEMO
{
	private:
		int n;
		char* p;
	public:
		DEMO(int n):n(n)
		{
			p=new char[20];
			cout << this << " call DEMO() n=" << n << endl;
		}

		DEMO(const  DEMO &a)
		{
			cout << this << " call DEMO(const DEMO &a)n=" << a.n << endl;
			p=new char[10];
			n=a.n;
			strcpy(p,a.p);
		}


	~DEMO()
	{
		delete[]p;
	}

	void show()
	{
		cout << this << " n=" << n << endl;
	}

};



int main()
{
		DEMO a(100);
		DEMO b(a);
		b.show();
	return 0;
}


