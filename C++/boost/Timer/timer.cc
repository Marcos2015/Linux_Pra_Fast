#include <boost/timer.hpp>
#include <iostream>
using namespace std;
using namespace boost;
int main()
{
	timer t;
	 for(int i=0;i<50;i++)
	 {
	    cout << i <<"\t";
	 }
	cout << endl;
	cout <<"max timespan:"<<t.elapsed_max() << endl;
	cout <<t.elapsed() << "s " << endl;

}


