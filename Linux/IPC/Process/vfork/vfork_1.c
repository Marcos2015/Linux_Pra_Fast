#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int glob=99;

int main()
{
	int var;
	var=88;
	pid_t pid;
	
	if((pid=vfork())<0)
	{
		printf("vfork error\n");
		exit(-1);
	}
	else if(pid==0)
	{
		var++;
		glob++;
		//return 0;
		exit(0);
	}

	printf("pid=%d,glob=%d,var=%d\n",getpid(),glob,var);
return 0;
}



