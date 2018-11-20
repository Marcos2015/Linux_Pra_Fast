#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	char *args[]={"/bin/ls","-l",NULL};
	if(execve("/usr/local/bin/ls",args,NULL)==-1)
	{
		perror("execve");
		exit(EXIT_FAILURE);
	}

	puts("Never get here\n");
	exit(EXIT_SUCCESS);
}


