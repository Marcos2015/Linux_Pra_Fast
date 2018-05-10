#include <iostream>
using namespace std;

union T
{
	int hello;
	char c;
}RT;

int main()
{
	RT.hello=0x12345678;
	if(RT.c==0x12)
	{
		cout << " big" << endl;
	}
	else
	{
		cout << "little" << endl;
	}

return 0;
}


