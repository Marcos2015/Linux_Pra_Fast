#include </usr/local/include/boost/thread/thread.hpp>
#include <iostream>
using namespace std;

void test()
{
	std::cout << "Hello world" << std::endl;
}


int main(int argc,char** argv)
{
	boost::thread t1(&test);
	      t1.join();
	      return 0;
}


