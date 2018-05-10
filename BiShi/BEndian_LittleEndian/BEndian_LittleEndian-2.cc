#include <iostream>
using namespace std;

int test_biglittle()
{
	union test
	{
		int ff;
		char d;
	}ui;

	ui.ff=0x01000002;
	return(ui.d==1);
}

int main()
{
	if(test_biglittle()==1)
	{
		cout << "big" << endl;
	}
	else 
	{
		cout << "little" << endl;
	}

return 0;
}


