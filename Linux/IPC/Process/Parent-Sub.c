#include <unistd.h>
#include <stdio.h>


int main()
{
	pid_t pid=fork();
	
	if(pid < 0 )
	{
		perror("fail to fork\n");
	}
	else if( pid == 0 )
	{
		printf("SuB, Parent=%u,Sub=%u\n",getppid(), getpid() );
		int i=0;
		//printf("Sub Foreach\n");
	/*	for( ;i < 6 ;i++ )
		{
			printf("%d\n",i);
		}
	*/
	}
	else
	{
		printf("Parent, Parent=%u,Sub=%u\n",getpid(),pid );
		//sleep(2);
	}

return 0;
}



