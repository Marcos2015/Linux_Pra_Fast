#include <iostream>
#include <vector>

int main()
{
	std::vector<int> arr={1,2,3};
/*
	for(const auto & n : arr)
	{
		std::cout << n++ << std::endl;
	}
*/

/*
	for(auto & n : arr)
	{
		std::cout << n++ << std::endl;
	}
*/
	for(auto n : arr)
	{
		std::cout << ++n << std::endl;
	}



	for(auto n : arr)
	{
		std:: cout << n << std::endl;
	}

return 0;
}



