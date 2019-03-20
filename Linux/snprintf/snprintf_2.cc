#include <stdio.h>
#include <iostream>
using namespace std;


int main()
{
	char int_char[10]={0};
	int k=100000;

		snprintf(int_char,sizeof(int_char),"%d",k);
		cout << int_char << endl;
return 0;
}


