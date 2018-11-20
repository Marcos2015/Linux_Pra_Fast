#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int global = 1;

int main(void)
{
	pid_t pid ;
	int stack = 1;
	int *heap;
	heap = (int*)malloc(sizeof(int));
	*heap = 3;
	pid = fork();
	    if( pid < 0 )
	    {
		    perror("fail to fork\n");
		    exit(-1);
	    }
	    else if(pid == 0 )
	    {
		    global++;
		    stack++;
		    (*heap)++;

		    printf("In Sub-process,global:%u,stack:%u,heap:%u\n", global,stack,*heap );
	    }
	    else
	    {
		    sleep(2);
		    printf("In Parent-process,global:%u,stack:%u,heap:%u\n", global,stack,*heap );
	    }
return 0;
}



