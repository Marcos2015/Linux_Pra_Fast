#include <iostream>
using namespace std;


int main()
{
	int n=5,*p=&n,&r=n;
	r=10;
	cout << n <<","<< *p <<","<< r << endl;
return 0;
}


