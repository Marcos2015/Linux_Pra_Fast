#include <iostream>
#include <vector>
using namespace std;

char *sztm="Hello world!";


int main()
{
	vector<char> v;
	vector<char>::iterator vi;


		while(*sztm != '\0')
		{
			v.push_back(*sztm);
			sztm++;
		}


		for(vi=v.begin(); vi!=v.end();vi++)
		{
			cout << *vi<< endl; 
		}


return 0;
}




