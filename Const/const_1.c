#include <stdio.h>

int main()
{
		int a=1;
		int* p=&a;

		*p=100;
		printf("%d\n",*p);
return 0;
}



