#include <iostream>
using namespace std;



int golf[10];



void scanf_array(int test_array[])
{
	cout << " Please Enter the golf numbers:" << endl;
	for(int i=0;i < 10 ; i++ )
	{
		cin >> test_array[i];
	}
}




void show_array(int test_array[])
{
	for(int i=0;i< 10; i++)
	{	
		cout << test_array[i] << endl;
	}
}


void aver_array(int test_array[])
{
	int ah=0;
	int golf_aver=0;
	for(int i=0;i<10;i++)
	{
		ah+=test_array[i];
	}

	golf_aver=ah/10;
	cout << "gollf_aver=" << golf_aver  <<  endl;
}


int main()
{
	scanf_array(golf);
	show_array(golf);
	aver_array(golf);

return 0;
}

