#include "apue.h"
#include <sys/types.h>
#include <signal.h>
#include <stdlib.h>
//#include <iostream>
#include <unistd.h>
//using namespace std;


int main()
{
	pid_t pid;

	if((pid=fork()<0))
	{
		perror("fork error");
	}
	else if(pid!=0)
	{
		sleep(2);
		exit(0);
	}

	if((pid=fork())<0)
	{
		perror("fork error");
	}
	else if(pid!=0)
	{
		sleep(4);
		abort();
	}


	if((pid=fork())<0)
	{
		perror("fork error");
	}
	else if(pid!=0)
	{
	    execl("/bin/dd","dd","if=/etc/passwd","of=/dev=null",NULL);
	    exit(7);
	}


	if((pid=fork())<0)
	{
	    perror("fork error");
	}
	else if(pid!=0)
	{
	    sleep(8);
	    exit(0);
	}



	sleep(2);
	kill(getpid(),SIGKILL);
	exit(6);
}



