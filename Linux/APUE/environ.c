#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

extern char** environ[];

int main()
{
	int i=0;
	while(environ[i]!=0)
	{
		printf("%s\n",environ[i]);
		i++;
	}

return 0;
}


