#include <iostream>
#include <vector>


std::vector<int> arr={1,2,3,4,5,56,7};

std::vector<int> get_range(void)
{
	std::cout << "get_range=" << std::endl;
	return arr;
}






int main()
{
    for( auto val : get_range() )
    {
	std:: cout << val << std::endl;
	arr.push_back(0);
	std::cout << val << std::endl;
    }

    return 0;
}




