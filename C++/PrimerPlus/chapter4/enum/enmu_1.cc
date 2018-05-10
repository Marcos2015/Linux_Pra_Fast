#include <iostream>
using namespace std;

int main()
{
	enum spectrum { red, orange ,yellow , green , blue , violet ,indigo };
	cout << red <<endl;
	cout << orange <<endl;
	cout << green <<endl;

	spectrum band;
	band = indigo ;
	//++band;	
	//band = 2000;
	cout << band << endl;	
	
	
	
return 0;
}


