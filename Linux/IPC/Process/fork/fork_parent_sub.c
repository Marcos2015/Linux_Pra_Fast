#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	pid_t id_1,id_2;
	if((id_1=fork()) ==0)
	{
		printf(" this sub process\n");
	}

	printf("this Parent process\n");
return 0;
}


