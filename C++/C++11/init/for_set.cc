#include <iostream>
#include <set>


std::set<int> ss={12,34,900,344,132};

int main()
{
	for( auto k:ss )
	{
//		std::cout << k++ << std::endl; /* k is read_only */
		std::cout << k << std::endl;
	}

return 0;
}


