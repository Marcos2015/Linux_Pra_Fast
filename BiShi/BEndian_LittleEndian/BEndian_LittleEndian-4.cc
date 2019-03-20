#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	union test
	{
		int y;
		char ch;
	}one;

	one.y=0x12345678;

	if(one.ch==0x12)
	{
		cout << "big" << endl;
	}
	else
	{
		cout << "little" << endl;
	}
	    printf("%x\n",one.ch);
return 0;
}


