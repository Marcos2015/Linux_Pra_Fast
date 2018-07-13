#include <iostream>
using namespace std;

int main()
{
	int number=0;
	int Max=0;
	cout << "Please input 5 numbers: " << endl;

	for(int i=0;i<5;i++)
	{
		cin >> number;
		if(number>Max)
		{
			Max=number;
		}
	}

	cout << "The Max number is : " << Max << endl;

return 0;
}


