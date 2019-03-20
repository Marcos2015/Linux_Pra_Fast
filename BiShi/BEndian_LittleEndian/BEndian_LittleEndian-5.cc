#include <iostream>
using namespace std;


int main()
{
/*
	int num=0x12345678;
	char *s =(char*)&num;
	    if( *s==0x12)
	    {
		    cout << "Big" << endl;
	    }
	    else
	    {
		    cout << "little" << endl;
	    }

*/
	union u
	{
		int hello;
		char T;
	}you;

	you.hello=0x12345678;
	char* c=(char*)&you.hello;
	if(*c==0x12)
	{
		cout << "big" << endl;
	}
	else
	{
		cout << "little" << endl;
	}



	    
	    
return 0;
}


