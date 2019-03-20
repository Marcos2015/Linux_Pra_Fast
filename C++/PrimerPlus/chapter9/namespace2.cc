#include <iostream>
using namespace std;

namespace Jill{
	int pal;
}
namespace Jack{
	int pal;
}

using Jill::pal;
using Jack::pal;


int main()
{

//	using Jill:: pal;
//	using Jack:: pal; //不能将本行与上一行同时使用，否则在此函数名字空间内，编译器无法识别哪一个pal.
return 0;
}


