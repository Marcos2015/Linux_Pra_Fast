#include <iostream>
using namespace std;

int main()
{
	int num=1;
	char* ch=(char*)&num;
	if(ch[0]==1)
	{
		cout << "little" << endl;
	}
	else 
	{
		cout << "big" << endl;
	}
return 0;
}


