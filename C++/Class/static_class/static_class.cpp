#include <iostream>
using namespace std;

class A
{
public:
		static int x;
		static void set( int i );
		static int get();
		A();
		~A();
private:
		int k;
};



A::A()
{
		k=6;
}

A::~A()
{
}


int A::x=5;

void A::set( int i)
{
		x=i;
}

int A::get()
{
		return x;
}


int main()
{
	cout << "A::get()="<< A::get() << endl;
	return 0;
}


