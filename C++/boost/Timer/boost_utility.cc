#include <boost/utility.hpp>
#include <iostream>
using namespace std;

class myclass:public boost::noncopyable
{
	public:
		myclass(){}
		myclass(int i){}
};


int main()
{
	myclass c1();
	myclass c2(1);
	return 0;
}


