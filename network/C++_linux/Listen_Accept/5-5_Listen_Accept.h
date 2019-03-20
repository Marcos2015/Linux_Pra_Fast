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

//本程序为服务端程序,运行方法:a.out + 本机IP地址 + 自己设置的端口号


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

