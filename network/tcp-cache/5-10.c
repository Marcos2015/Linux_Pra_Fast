#include <stdio.h>
#include <sys/socket.h>
#include <assert.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER_SIZE 512


int main(int argc,char* argv[])
{
    if(argc < 2)
    {
	printf("usage:%s ip_address port_number send_buffer_size\n",basename(argv[0]));
	return 1;
    }

    const char* ip=argv[1];
    int port=atoi(argv[2]);

    struct sockaddr_in server_address;
    server_address.sin_family=AF_INET;
    inet_pton(AF_INET,ip,&server_address.sin_addr);
    server_address.sin_port=htons(port);
    int send_size=0;
    int recv_size=0;
    socklen_t optlen=0;




    int sock=socket(PF_INET,SOCK_STREAM,0);
    assert(sock>=0);

    int sendbuf=atoi(argv[3]);
    int len=sizeof(sendbuf);

	    optlen=sizeof(send_size);
	getsockopt(sock,SOL_SOCKET,SO_SNDBUF,&send_size,&optlen);
	    printf("the send_size is : %d\n",send_size);

	    optlen=sizeof(recv_size);
	getsockopt(sock,SOL_SOCKET,SO_RCVBUF,&recv_size,&optlen);
	    printf("the recv_size is : %d\n",recv_size);

    setsockopt(sock,SOL_SOCKET,SO_SNDBUF,&sendbuf,sizeof(sendbuf));
    getsockopt(sock,SOL_SOCKET,SO_SNDBUF,&sendbuf,(socklen_t*)&len);
    printf("the tcp send buffer size after setting is %d\n",sendbuf);

    if(connect(sock,(struct sockaddr*)&server_address,sizeof(server_address))!=-1)
    {
	char buffer[BUFFER_SIZE];
	memset(buffer,'a',BUFFER_SIZE);
	send(sock,buffer,BUFFER_SIZE,0);
    }

    close(sock);
    return 0;
}



