#include <stdio.h>
#include <unistd.h>

int main()
{
	printf("Before fork() PID=%u\n",getpid());

	fork();
	fork();
	fork();

	printf("my pid is %d\n",getpid());
return 0;
}



