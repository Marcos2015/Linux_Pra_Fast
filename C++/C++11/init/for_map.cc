#include <map>
#include <iostream>



std::map<std::string,int> mm={ {"Hello",45},{"camp",100}};



int main()
{
	for( auto &n : mm )
	{
		std:: cout << n.first << "  "<<  n.second << std::endl;
	}

return 0;
}


	
