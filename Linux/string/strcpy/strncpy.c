#include <stdio.h>
#include <string.h>


int main()
{
	char p[5];
	char * g="Hello Kitty";
		strncpy(p,g,sizeof(p)-1);
		//strncpy(p,g,sizeof(p));
		strncpy(p,g,7);

	p[sizeof(p)-1]='\0';
		printf("%s\n",p);
return 0;
}


