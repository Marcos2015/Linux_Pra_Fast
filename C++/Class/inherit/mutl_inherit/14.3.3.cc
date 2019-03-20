#include <iostream>
using namespace std;


class Base
{
	private:
		int i;
	public:
		Base(int n)
		{
			cout << "constructing Base class\n";
			i=n;
		}

		~Base()
		{
			cout << "desructing Base class\n";
		}


		void show_i()
		{
			cout << i << endl;
		}


};


class Derived:public Base
{
private:
	int j;
	Base ob;
public:
	Derived(int n):Base(n),ob(n)
	{
		cout << "constructing Derivaed class" << endl;
		j=2*n;
	}

	~Derived()
	{
		cout << "destructing Derivaed class \n";
	}

	void show_j()
	{
		cout << j << endl;
	}



};



int main()
{
	Derived ob(10);
	ob.show_i();
	ob.show_j();

return 0;
}



