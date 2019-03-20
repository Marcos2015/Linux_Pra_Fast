#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> test;
	for(int i=0;i<5;i++)
	{
		test.push_back(i);
	}

	list<int>::iterator TL=test.begin();

	for( ;TL!=test.end();TL++)
	{
		cout <<*TL<<endl;
	}


	cout << endl;

	list<int>::reverse_iterator TC=test.rbegin();

	for( ;TC!=test.rend();TC++)
	{
		cout << *TC << endl;
	}



return 0;
}


