#include <stdio.h>
#include <unistd.h>

int main()
{
	pid_t pid;
	if((pid=fork())<0)
	{
		perror("error\n");
	}
	else if(pid==0)
	{
		if((pid=fork())<0)
		{
			perror("appear error\n");
		}
		else if(pid==0)
		{
			printf("This is Child OF Child\n");
		}



		printf("this is Child Process\n");
	}
	else
	{
		printf("this is Father Process\n");
	}

return 0;
}




