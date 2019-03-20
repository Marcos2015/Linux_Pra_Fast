#include <stdio.h>


int * name()
{
	int *s = NULL;
	    *s = 5;
	return s;
}


int main()
{
	int * a = name();
	printf("%d\n",*a );
return 0;
}


