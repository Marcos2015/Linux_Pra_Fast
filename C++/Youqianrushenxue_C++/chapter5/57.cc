#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a,b,c;
	cout << "Please input a,b,c: "<<endl;
	cin >> a >> b >> c;
	float s=(a+b+c)/2;
	int area=sqrt(s*(s*(s-a)*(s-b)*(s-c)));

	cout << area << endl;
	return 0;
}


