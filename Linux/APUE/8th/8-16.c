#include "apue.h"
#include <sys/wait.h>

char* env_init[]={"USER=unknow","PATH=/tmp",NULL};


int main()
{
	pid_t pid;
	if((pid=fork())<0)
	{
		perror("fork error");
	}
	else if(pid==0)
	{
		if(execle("/Users/zhaofeng/","echoall","myarg1","MY ARG2",(char*)0,env_init)<0)
			perror("execle error");
	}


	if(waitpid(pid,NULL,0)<0)perror("wait_error");
	if((pid=fork())<0)
	{
	    perror("fork_err");
	}
	else if(pid==0)
	{
		if(execlp("echoall","echoall","only 1 arg", (char*)0)<0);
		perror("execlp error");
	}
	exit(0);
}



		

