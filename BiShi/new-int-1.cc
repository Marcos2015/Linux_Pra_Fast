#include <iostream>
using namespace std;

int main()
{
	int * p = new int(90);
	cout << "*p=" << *p << endl;

	delete p;
	// p=nullptr;
		*p = 100;
	    cout << "*p=" << *p << endl;	
return 0;
}



