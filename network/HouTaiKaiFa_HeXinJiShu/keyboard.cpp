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
			if(FD_ISSET(keyboard,&readfd))
			{
		  		i=read(keyboard,&c,1);
		   		if('\n'==c)//在终端输入一串字符时，按下回车键，字符串才会被读入到缓冲区中，而不是在终端输入字符串就被输入；所以当一串字符串被输入缓冲区之后，read函数才开始读这个字符串，然后执行判断. 当输入字符,例如:w,按下回车键,w就会被读入发送到缓冲区里面，接着开始if判断，首先w不是'\n'换行符，然后执行printf打印w字符的操作，接着判断回车，回车属于‘换行+返回行首’，即属于换行，那么就continue,跳出该循环，不执行printf，然后执行下一次while循环.
		   		    continue;
		 		 printf("The input is %c\n",c);
		 		 //printf("hello\n");
		  		if('q'==c )
		      			break;
			 }	
			
     }
	return 0;
}




