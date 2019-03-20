#include <iostream>
#include <string.h>
using namespace std;


class A
{
public:
		A();
		~A();

}

A::A()
{
		memset(this,0,sizeof(*this));
}

int main()
{
		A a;
return 0;
}


