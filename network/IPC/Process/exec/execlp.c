#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	char *const ps_argv[]={"ps","-ax",NULL};
	char *const ps_envp[]={"PATH=/bin:/usr/bin/","TERM=console",NULL};
	if((execlp("ps","ps","-ax",NULL)) == -1 )
	{
		perror("exec failure");
		exit(EXIT_FAILURE);
	}

	puts("Never get here");
exit(EXIT_SUCCESS);
}



		
