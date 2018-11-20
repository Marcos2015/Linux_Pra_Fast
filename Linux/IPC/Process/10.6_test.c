#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int main()
{
	pid_t pc,pr;
	pc = fork();

	if( pc == 0 )
	{
		printf("Sub PID=%u\n",getpid() );
		exit(3);
	}
	else if( pc > 0 )
	{
		pr = wait( NULL );
		printf("Parent process , the Sub PID=%u\n",pr );
	}
	else
	{
		perror("fork faile\n");
	}
return 0;
}


