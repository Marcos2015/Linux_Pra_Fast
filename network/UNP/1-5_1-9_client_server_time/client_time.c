#include <unistd.h>
#include <stdio.h>
#include <netinet/in.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <stdlib.h>

const int MAXLINE = 1024;

int main( int argc, char **argv)
{
	int sockfd,n;
	char recvline[MAXLINE + 1];
	struct sockaddr_in servaddr;
		if( argc != 2 )
		{
			printf("usage:a.out <IPadress>");
		}

		if( ( sockfd = socket(AF_INET,SOCK_STREAM,0)) < 0)
		{
			printf("socket Error\n");
		}


		bzero(&servaddr,sizeof(servaddr));
		servaddr.sin_family = AF_INET;
		servaddr.sin_port = htons(9999);
	//        servaddr.sin_addr.s_addr=inet_addr("127.0.0.1");
	
		if(inet_pton(AF_INET,argv[1],&servaddr.sin_addr) <= 0 )
		{
			printf("inet_pton error for %s",argv[1] );
		}
		

		if( connect(sockfd,(struct sockaddr*)&servaddr,sizeof(servaddr)) < 0 )
		{
			printf("connect error\n");
		}


	while( ( n = read(sockfd,recvline,MAXLINE ) ) > 0 )
	{
		recvline[n]=0;
		if(fputs(recvline,stdout) == EOF)
		{
			printf("fputs error\n");
		}

	}

if( n < 0 )
{
	printf("read error\n");
}


exit(0);
}







