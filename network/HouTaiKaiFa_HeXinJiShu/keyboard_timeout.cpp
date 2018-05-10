#include <sys/time.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <errno.h>
#include <sys/select.h>

int main()
{
    int keyboard;
    int ret,i;
    char c;
    fd_set readfd;
    struct timeval timeout;
    keyboard=open("/dev/tty",O_RDONLY | O_NONBLOCK);//由于0,1,2默认打开,keyboard这个文件描述符则一定比2大(假如open成功打开终端的话).所以需要用assert判断keyboard是否一个大于0的数，准确说应该大于2.
	printf("keyboard=%d\n",keyboard);

    assert(keyboard>0);

    while(1)
    {
	timeout.tv_sec=1;
	timeout.tv_usec=0;
	FD_ZERO(&readfd);
	FD_SET(keyboard,&readfd);
	ret=select(keyboard+1,&readfd,NULL,NULL,&timeout);
		if(ret==-1)perror("select error");
		else if(ret)
		{
			if(FD_ISSET(keyboard,&readfd))
			{
		  		i=read(keyboard,&c,1);
		   		if('\n'==c)
		   		    continue;
		 		 printf("The input is %c\n",c);
		  		if('q'==c )
		      			break;
			 }	
   		}else if(ret==0)
			 	{
				    printf("time out\n");
				}
			
     }
	return 0;
}




