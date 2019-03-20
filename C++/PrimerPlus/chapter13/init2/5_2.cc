#include <iostream>
using namespace std;

class Demo
{
	private:
		int n;
		char* p;
	public:
		Demo(int n):n(n)
		{
			p=new char[20];
			cout << this << "call Demo() n=" << n << endl;
		}

		~Demo()
		{
			delete []p;
		}


	void show()
	{
		cout << this << " n=" << n << endl;
	}


};


int main()
{
	Demo demo1(100);
	Demo demo2(demo1);
return 0;
}



