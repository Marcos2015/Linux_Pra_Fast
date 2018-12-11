#include <unistd.h>
#include <iostream>
using namespace std;



int main()
{
	pid_t pid;
	pid = fork();

	if( pid < 0 )
	{
		perror("fail to fork\n");
		exit(-1);

	}
	else if( pid == 0 )
	{
		printf("Sub-Process, Sub-Process PID=%u,Parent-Process PID=%u\n",getpid(),getppid() );
	}
	else
	{
		printf("Parent-Process, Sub-Process PID=%u,Parent-Process PID=%u\n",pid,getpid()  );
	//sleep(2);注释掉sleep之后,有可能出现父进程比子进程先结束,然后子进程成为孤儿进程,那么子进程就会将PI为1的init进程作为自己的父进程,所以有可能会出现该孤儿进程的父进程PPID=1的情况.
	}

    return 0;
}


