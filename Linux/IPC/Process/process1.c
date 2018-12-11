#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	pid_t pid;
	pid = fork();
		if(pid > 0)
		{
			printf( " I'm Farther Profess,ID=%d\n",getpid());
			printf("PID == %d\n",pid);
			pid_t pidd = wait(NULL);
			//waitpid(pid);
			printf("Wait's PID = %d\n",pidd);
				exit(0);
		}
		else if(pid == 0)
		{
			printf("I'm child profess,ID=%d\n",getpid());
			printf("PID == %d\n",pid);
				exit(0);
		}


		return 0;
}

