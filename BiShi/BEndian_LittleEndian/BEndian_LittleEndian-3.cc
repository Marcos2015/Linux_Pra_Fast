#include <iostream>
using namespace std;

int test()
{
	union T
	{
		int s;
		char ch;
	}hello;

	hello.s=0x1;
	return(hello.ch==1);
}


int main()
{
	if(test()==1)
	{
		cout << "little" << endl;
	}
	else 
	{
		cout << "big" << endl;
	}

return 0;
}


