#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main()
{
	pid_t pid,pr;
	pid = fork();
	
	if( pid < 0 )
	{
		perror("fork() fail\n");
		exit(3);
	}
	else if( pid == 0 )
	{
		printf("Sub will sleep 10 second\n");
		sleep(10);
		exit(0);
	}
	else if( pid > 0 )
	{
		do{
			pr = waitpid( pid , NULL , WNOHANG );
			if( pr == 0 )
			{
				printf("No Sub process exit\n");
				sleep(2);
			}
		}while( pr == 0 );
	
		if( pr == pid )
		{
			printf("Successfully get Sub process=%d\n",pr );
		}
		else
		{
			printf("Some error occured\n");
		}
	}
return 0;
}



