#include <stdio.h>
#include <signal.h>
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



class Network_Start
{
private:
	static bool stop;
	static void handle_term( int sig )
	{
	    stop = true ;
	}

/*
    const char* ip = argv[1];
    int port = atoi( argv[2] );
    int backlog = atoi( argv[3] );
*/
   
	    const char* ip;
	    int port;
	    int backlog;
	    int sock;

public:
	Network_Start(char* argv_1,char* argv_2,char* argv_3);
	void listen_connect();	
	int Network_End(int argc,char* argv_0);

};
