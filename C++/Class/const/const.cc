#include <iostream>
using namespace std;


int main()
{
	int age=20;
	int age_1=30;
//	const  int * p=&age;
	int * const p=&age;
	//cout << *p << endl;
	

		*p=100;
		cout << *p << endl;


return 0;
}



