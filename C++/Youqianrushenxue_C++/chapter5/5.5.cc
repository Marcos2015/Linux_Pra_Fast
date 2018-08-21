#include <iostream>
using namespace std;

int main()
{
	int year=0;
	int flag=0;
	cout << " Please input years:" << endl;
	cin >> year;
	if(year%4==0 && year%100==0 || year%400==0 )flag=1;


	if(flag==1)
	{
		cout << "This is Run Nian" << endl;
	}
		else
	{
		cout << "This is Not Run Nian" << endl;
	}

	return 0;
}

