#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    /*
    int n,fd;
    char buf[10];
    fd=open("/dev/tty",O_RDONLY );
    


    n=read(fd,buf,10);

    */
    char buf[10];
    int n=read(STDIN_FILENO,buf,10);
    write(STDOUT_FILENO,buf,10);
    //close(fd);

return 0;
}





