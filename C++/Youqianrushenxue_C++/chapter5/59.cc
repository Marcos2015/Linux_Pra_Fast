#include <iostream>
using namespace std;


int main()
{
	int day=0,month;
	cout << "Please input month: " << endl;
	cin >> month;
	switch(month)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
			day=31;
			break;
	}
	cout << day << endl;

return 0;
}



