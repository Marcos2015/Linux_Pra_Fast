#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <netinet/in.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <stdlib.h>

const int MAXLINE = 1024;

int main( int argc,char **argv)
{
	int listenfd,connfd;
	struct sockaddr_in servaddr;
	char buff[MAXLINE];
	time_t ticks;

	listenfd = socket( AF_INET,SOCK_STREAM ,0 );
	bzero(&servaddr,sizeof(servaddr));
	servaddr.sin_family = AF_INET;
//	inet_pton( AF_INET,"192.168.0.108",&servaddr.sin_addr );
//	servaddr.sin_addr.s_addr = htonl(INADDR_ANY);


	servaddr.sin_addr.s_addr = inet_addr("10.211.55.13");
	servaddr.sin_port = htons(9999);

	bind( listenfd,( struct sockaddr* )&servaddr,sizeof(servaddr) );
	listen( listenfd,5 );

	for(;;)
	{
		connfd = accept(listenfd,(struct sockaddr*)NULL,NULL);
		ticks = time(NULL);    //把时间转换成可直观的时间格式
		snprintf(buff,sizeof(buff),"%s.24s\r\n",ctime(&ticks));
		write(connfd,buff,strlen(buff));

		close(connfd);
	}
exit(0);
}


