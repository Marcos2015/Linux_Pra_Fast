#include <vector>
#include <iostream>


void func(std::initializer_list<int> l)
{
	for(auto it=l.begin();it != l.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
}




std::vector<int> func(void)
{
	return {1,3};
}



int main()
{
	func({});
	func({12,34,5});
return 0;
}



