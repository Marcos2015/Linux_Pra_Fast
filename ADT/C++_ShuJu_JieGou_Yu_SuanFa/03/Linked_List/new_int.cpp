#include <iostream>
using namespace std;


int main()
{
    int* p = new int[10];
    int sum=0;
    int n=10;
    int i=0;
    for(sum=*p,i=0;i<n;i++)
    {
	 sum+=*(p+1);
    	cout << sum << endl;
    }
return 0;
}



