#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main()
{
	pid_t pid;

	if((pid=fork())<0)
	{
		perror("fork failed\n");
	}
	else if(pid==0)
	{
		//printf("first Child PID=%d\n",getpid());
		if((pid=fork()<0))
		{
			perror("fork failed\n");
		}
		else if(pid<0)
			exit(0);



		sleep(2);
		printf("Second Child ,PID=%d\t Parent pid=%d\n",getpid(),getppid());
		exit(0);
	}


//	printf("-------PID=%d\n",pid);
	if(waitpid(pid,NULL,0)!=pid)
		perror("wait error\n");
	exit(0);

return 0;
}


			    
