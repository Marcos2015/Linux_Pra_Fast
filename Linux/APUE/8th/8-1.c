#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>


int globvar=6;
char buf[]="a write to stdout\n";


int main()
{
	int var;
	pid_t pid;

	var=88;
	if(write(STDOUT_FILENO,buf,sizeof(buf)-1) != sizeof(buf)-1)
		perror("write error");
	printf("before fork\n");


	if((pid=fork())<0) //父子进程从这一条语句开始执行.
	{
		perror("fork error");
	}
	else if(pid==0)
	{
		printf("子进程运行\n");
		globvar++;//gloable=6
		var++;//var=88  
	}
	else
	{
		printf("父进程运行(PID不等于0了)\n");
		sleep(1);
	}

	printf("pid=%ld,glob=%d,var=%d\n",(long)getpid(),globvar,var);

	exit(0);

}


