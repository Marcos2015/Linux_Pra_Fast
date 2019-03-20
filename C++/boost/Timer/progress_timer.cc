#include <iostream>
#include <boost/progress.hpp>
using namespace std;


int main()
{
	    int i=3;
	    while(i--)
	    {
		   sleep(2);
	    }


	    boost::timer t1;
	cout << "timer:" << t1.elapsed() << endl;

	{
		boost::progress_timer t;
	//cout << t.elapsed() << endl;
		for(int i=1;i<1000000000;i++);
	}

		

	{
		boost::progress_timer t;
		for(int i=1;i<100000000;i++);
	}

return 0;
}


