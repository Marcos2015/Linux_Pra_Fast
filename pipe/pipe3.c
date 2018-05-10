#include <signal.h>
#include <stdio.h>
#include <string.h>


void handler(int sig)
{
    if(signal==sig)
    {
	printf("recv SIGPIPE\n");
    }

}

int main(void)
{
    int p[2];
    signal(SIGPIPE,handler);
    pipe(p);
    close(p[0]);

    int ret=0;
    ret=write(p[1],"HelloWorld",10);
    printf("ret=%d\n",ret);
return 0;
}


