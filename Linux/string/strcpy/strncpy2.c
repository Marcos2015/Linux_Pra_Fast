#include <stdio.h>
#include <string.h>


int main()
{
	char p[5];
	char* s="hello world";
		strncpy(p,s,sizeof(p));
	printf("%s\n",p);
return 0;
}


