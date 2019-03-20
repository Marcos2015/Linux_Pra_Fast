#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
		int fd[2];
		pid_t pi;
		char buf[1024]={0,};
		char *str="this test string";
		
		if(pipe(fd)==-1)
		{
				printf("create pipe failure\n");
		}

		if((pi=fork())==-1)
		{
				printf("create process failure\n");
		}
		else if(pi==0)
		{
				close(fd[0]);
				write(fd[1],str,strlen(str));
				exit(0);
		}
		else 
		{
				close(fd[1]);
				read(fd[0],buf,sizeof(buf));
				printf(" Father read data is:%s\n",buf);
		}


return 0;
}


