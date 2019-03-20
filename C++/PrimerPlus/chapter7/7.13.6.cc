#include <iostream>
#include <string>
using namespace std;




double fh[10];
int Fill_array(double foo[],int test_int )
{
	int count=0;
	for(int i=0;i < test_int ; i++)
	{
		cout << "Please Enter the numbers:\n";
			cin >> foo[i];
			 count+= foo[i];
		if(foo[i] >= 'a' && foo[i] <= 'z')
		{ 
			return 0;
		}else if (foo[i] >= 'A' && foo[i] <= 'Z')return 0;
		
		cout << foo[i] << endl;

	}
	cout << count << endl;
	return 0;
}

int Reverse_array(double foo[],int test_int)
{
	int test = test_int ;
	for(int i=0;i < test_int ; i++)
	{
		foo[i]=foo[test - 1];
			test--;
		cout << foo[i] << endl;
	}
		
	return 0;
}




int main()
{
	Fill_array(fh,7);
	Reverse_array(fh,7);
	return 0;
}

