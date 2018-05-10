#include <iostream>


int main()
{
	int test=43;
	int* p=&test;

	void* p1=p;
//	int* p1=p;
//
	int * kk=(int*)p1;
//	std::cout << *p1 << std::endl;
	std::cout << *kk << std::endl;
return 0;
}




