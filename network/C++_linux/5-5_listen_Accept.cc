#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <assert.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <libgen.h>
#include <iostream>
using namespace std;


//客户端不需要写代码，输入telnet + 服务端的ip + 服务端的port。
//即可连接到服务端，并收到服务端的返回打印服务端ip地址和客户端port。


class Server
{
    private:
	    const char* ip;
	    int port;
	    int sock;
	    int ret;	




    public:
	int  Server_Connect(int argc,char* argv_0,char* argv_1,char* argv_2);
	void Server_Accept();


};


int Server::Server_Connect(int argc,char* argv_0,char* argv_1,char* argv_2)
{

	if(argc <= 2 )
	{
		printf( "usage: %s,ip_adress port_number\n",basename( argv_0 ) );
		return 1;
	}

	ip = argv_1;
	port=atoi( argv_2 );

	struct sockaddr_in address;
	bzero( &address,sizeof( address ));
	address.sin_family = AF_INET;
	inet_pton( AF_INET,ip,&address.sin_addr );
	address.sin_port = htons(port);
			printf("%s\n",argv_1);
		sock = socket( PF_INET,SOCK_STREAM,0);//创建一个socket套接字
		assert( sock >= 0 );

		ret = bind( sock, ( struct sockaddr* )&address,sizeof(address) );//绑定套接字
		assert(sock >= 0 );

		ret = listen( sock,5);//监听套接字
		assert( ret != -1 );

return 0;
}




void Server::Server_Accept()
{
		struct sockaddr_in client;
		socklen_t client_addrlength = sizeof( client );
		int connfd = accept ( sock,( struct sockaddr* )&client,&client_addrlength );//接客户端受套接字，并把客户端的ip地址存入client结构体地址里面
		if( connfd < 0 )
		{
			printf("Error is : %d\n",errno );
		}else{
			char remote[INET_ADDRSTRLEN];
			printf("connected with ip: %s and port:%d\n",inet_ntop( AF_INET,&client.sin_addr,remote,INET_ADDRSTRLEN ),ntohs(client.sin_port) );//将监听到的客户端ip地址通过inet_ntop函数转换成主机字节序，并打印显示出来。
//			close( connfd );
		      }
}



int main( int argc,char* argv[] )
{
		Server S;
		S.Server_Connect(argc,argv[0],argv[1],argv[2]);
		sleep(10);
		S.Server_Accept();

//		close ( sock );
		return 0;
}




