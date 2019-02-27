#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
		 
{
	char* msg;
	int k=0;
	pid_t pid=fork();


	switch(pid)
	{
	    case 0:
		 msg="Child is runing";
		 k=2;
		 break;
	    case -1:
		 msg="Process failed";
		 break;
	    default:
		 msg="Parent process running";;
		 k=5;
		 break;


	}

	printf("hhh\n");


	while(k>0)
	{
		puts(msg);
		sleep(2);
		k--;
	}


}


