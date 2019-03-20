#include <iostream>
using namespace std;


int main()
{
	int test_a = 100;
	int * p = new int;
	delete p;
	p=NULL;

	    p = &100;
	    cout << "*p=" << *p << endl;	    
	
return 0;
}



