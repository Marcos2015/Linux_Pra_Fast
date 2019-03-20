#include <iostream>
#include <string>
#include "max.hpp"

int main()
{
	::max(static_cast<int>(19.0),1);
	std::cout << "::max(7,1.0) = " << ::max(static_cast<int>(27.0),1) <<std::endl;
	
	std::string string1="Hello";
	std::string string2="Kitty";

	//std::cout <<"::max("Hello","Kitty")="<< ::max(string1,string2)<<std::endl;
	
	std::cout << ::max("Hello","Kitty") << std::endl;
	return 0;
}



