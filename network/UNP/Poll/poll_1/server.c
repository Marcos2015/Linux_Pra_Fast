#include <unistd.h>
#include <<sys.types.h>
#include <fcntl.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <signal.h>
#include <sys/wait.h>
#include <poll.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <iostream>

#define ERR_EXIT(m)

do
{
    peeror(m);
    exit(EXIT_FAILURE);
}while(0);



typedef std::vector<struct pollfd> PollFdList;

int main(void)
{
    signal(SIGPIPE,SIG_IGN);
    signal(SIGCHLD,SIG_IGN);

    int listedfd;
    if((listenfd=socket(PF_INET,SOCK_STREAM | SOCK_NONBLOCK | SOCK_CLOEXEC,IPPROTO_TCP)))
	    {
	    	ERR_EXIT("SOCKET");
	    }

    struct sockaddr_in servaddr;
    memset(&servaddr,0,sizeof(servaddr));
    servaddr.sin_family=AF_INET;
    servaddr.sin_port=htons(5188);
    servaddr.sin_addr.s_addr=htonl(INADDR_ANY);

    int on=1;
	


