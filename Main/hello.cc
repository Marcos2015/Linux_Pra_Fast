#include <iostream>
#include "hello.h"


HelloWorld:: ~HelloWorld()
{
	cout << "this is HelloWorld's destory function " << endl;
}

int HelloWorld::getVariable()
{
	cout << "this is getVariable() " << endl;
	return 0;
}


