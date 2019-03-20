#include <stdio.h>

void chang(char* y)
{
	y=NULL;
}


int main()
{
	char * p="Hello";
	chang(p);
		printf("%s\n",p);
return 0;
}



		
