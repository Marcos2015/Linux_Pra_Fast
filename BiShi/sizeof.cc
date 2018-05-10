#include <iostream>
using namespace std;



int sizeof_test(char str[1000])
{
	cout << sizeof(str) << endl;  //数组名作为参数退化为指针，所以在64位系统为8.
}

char str[]="Hello";
int n = 10;
double Q_str = 3.098762;

int main(void)
{
	char fg[1000];
		printf("%lu\n",sizeof(fg) );//数组名没有作为参数时，显示的是整个数组的长度.
	sizeof_test(fg);  // 8
		printf("%lu\n",sizeof(str)); // 6
		printf("%lu\n",sizeof(n));// 4
		printf("%lu\n",sizeof( Q_str) );
void* p = malloc( 100 );
printf("%lu\n",sizeof( p )  ); // 8

return 0;
}


