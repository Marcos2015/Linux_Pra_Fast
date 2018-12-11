#include <stdio.h>

int main()
{
	int fork_pid;
	fork_pid = fork();
		if(fork_pid == -1 )
		{
			perror("fork fail\n");
		}
return 0;
}


