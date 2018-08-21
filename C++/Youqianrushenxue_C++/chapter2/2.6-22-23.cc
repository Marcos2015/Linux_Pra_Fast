#include <iostream>
using namespace std;


int main()
{
	char ch;
	cout << "Please input a ch: " << endl;
	cin>>ch;

	if( ch<=90 && ch >=65 )
	{
		ch=ch+32;
	}
	else
	{
	    ch=ch-32;
	}

	cout << "ch = " << ch << endl;

return 0;
}



    
