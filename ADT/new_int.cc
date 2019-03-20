#include <iostream>
#include <unistd.h>
using namespace std;


int main()
{
	int *m=new int(100);
//	*m=50;
	cout << *m << endl;
	cout << "now point adress is : " << m << endl;
	delete m;
	// sleep(600);
	cout << "now point adress is : " << m << endl;
	    cout << *m << endl;
return 0;
}



