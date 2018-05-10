#include <iostream>
using namespace std;



int Entry()
{
	int a,b;
	cout << "Please enter the two numbers:" << endl;
	cin >> a >> b;
	if(a == 0 || b == 0) return 0;
	cout << 2.0*a*b/(a+b) << endl;
	return 0;
}





int main()
{
	Entry();
	return 0;
}

