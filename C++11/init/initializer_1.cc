#include <iostream>


struct Foo
{
	Foo(int ,double){}
};


Foo func(void)
{
	return {123,321.0};
}



int main()
{
	return 0;
}


