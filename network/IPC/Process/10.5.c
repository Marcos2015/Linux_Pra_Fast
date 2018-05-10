#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	pid_t pid = fork();

	if( pid > 0 )
	{
		printf("Parent process: Parent is going to sleep\n" );
		sleep(3);
		printf("Sleep over ,wake up!\n");
	}
	else if( pid == 0 )
	{
		printf("Sub process ,sub exit\n");
		exit(0); 
	}
return 0;
}

