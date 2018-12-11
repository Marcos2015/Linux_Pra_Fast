#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int main()
{
	pid_t pid = fork();
	if( pid < 0 )
	{
		perror("fork fail\n");
		return 0;
	}
	else if( pid > 0 )
	{
		printf("Parent process\n");
		int status = -1;
		pid_t pr = wait( &status );
		if( WIFEXITED(status) )
		{
			printf("Sub process %d exit normally.\n",pr );
			printf("the return code is %d.\n",WEXITSTATUS(status));
		}
		else
		{
			printf("Sub process PID=%d exit abnormally.\n",pr );
		}
	}
	else if( pid == 0 )
	{
		printf("Sub-process ,PID=%d,PPID=%d\n", getpid(),getppid());
		sleep(10);
		exit(3);
	}
return 0;
}


