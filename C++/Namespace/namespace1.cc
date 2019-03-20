#include <iostream>
using namespace std;


namespace Jill{
	int h;
}

namespace Jack{
	int h;
}


int main()
{

	// cout <<  using Jill::h << endl;
	using Jack::h;

/*
	Jill::h=0;
	Jack::h=7;
*/
return 0;
}


