#include <unistd.h>
#include <stdio.h>
#include <string.h>

#define MAX_LINE 80
#define PIPE_STDIN 0
#define PIPE_STDOUT 1


int main()
{
    const char* string={"A sample message."};
    int ret ,myPipe[2];
    char buffer[MAX_LINE+1];

    ret=pipe(myPipe);

    if(ret==0)
    {
	write(myPipe[PIPE_STDOUT],string,strlen(string));
	ret=read(myPipe[PIPE_STDIN],buffer,MAX_LINE);

	buffer[ret]=0;

	printf("%s\n",buffer);

    }
 return 0;
}




