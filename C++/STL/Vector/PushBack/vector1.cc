#include <iostream>
#include <vector>
using namespace std;

int main()
{
		
		vector<double> a;
		vector<double>::const_iterator i;
		a.push_back(1);
		a.push_back(2);
		a.push_back(3);
		a.push_back(4);
		a.push_back(5);


		for(i=a.begin(); i != a.end();cout << *i << "\t",i++);

		putchar(10);
return 0;
}



