//#include </usr/local/include/boost/thread/thread.hpp>
#include <boost/thread/thread.hpp>
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



//编译命令:g++ -I /usr/local/Celler/boost/1.67.0_1/include/boost/  \
//             -L /usr/local/Cellar/boost/1.67.0_1/lib \
//             -lpthread  -lboost_system -lboost_thread-mt  test_boost.cpp
//             -I 表示需要链接的第三方库头文件的位置
//             -L 表示需要链接的第三方库的库的位置
//             -l 指明需要链接的第三方库的名字
//             boost库的pthread名字叫boost_thread-mt,不是boost_pthread
