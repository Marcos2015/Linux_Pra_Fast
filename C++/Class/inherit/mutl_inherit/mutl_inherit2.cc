#include <iostream>
using namespace std;

class Base
{
	private:
		int g;
	public:
		Base(int n,int m)
		{
			cout << "constructing Base n=" << n << endl;
			cout << "constructing Base m=" << m << endl;
		}

	~Base()
	{
		cout << "destructing Base " <<  endl;

	}


};



class child:public Base
{
	private:
		int k;
		Base Base1;
	public:
		child(int aa,int bb,int cc,int dd,int ee):Base(aa,bb),Base1(cc,dd),k(ee)
		{
			cout << "consructing child " << endl;
			cout << "k=" << k << endl;

		}

		~child()
		{
			cout << "destructing child" << endl;
		}

};


int main()
{
	child child1(12,13,100,200,0);
	return 0;
}



