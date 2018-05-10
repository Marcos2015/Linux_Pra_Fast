//#include <initializer_list>
#include <iostream>
using namespace std;



int main()
{
	int array[]={1,2,3,4,5,6};
	long sum=0;

	    for(int x:array)
	    {
		    sum += x;
		    cout << "sum=" << sum << endl;
	    }


	    for( auto elem:{ sum,sum*2,sum*4 } )
	    {
		    cout << elem  << sum <<endl;
	    }


return 0;
}



