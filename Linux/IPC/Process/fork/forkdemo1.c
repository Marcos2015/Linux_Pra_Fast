#include <unistd.h>
#include <stdio.h>

int main()
{
	int ret_fork_pid;
	pid_t pid;

	printf("Before fork() PID=%u\n",getpid());

	pid=fork();
	printf("After fork() ,Parent PID=%u,Sub PID=%u\n",getpid(),pid );
	return 0;
}



