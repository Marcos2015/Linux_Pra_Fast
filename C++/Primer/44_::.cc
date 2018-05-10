#include <iostream>


int reused=42;

int main()
{

	int unique=0;
	std::cout << unique << std::endl;

	std::cout << ::reused << std::endl;

return 0;
}



