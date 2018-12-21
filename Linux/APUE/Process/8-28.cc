#include "apue"

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

	if((pid=fork()<0)
	{
		perror("
