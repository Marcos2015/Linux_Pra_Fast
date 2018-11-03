#include "5-3_Listen_Only.h"


bool Network_Start::stop=false;

Network_Start::Network_Start(char* argv_1,char* argv_2,char* argv_3)
{
		ip=argv_1;
		port=atoi(argv_2);
		backlog=atoi(argv_3);
}

void Network_Start::listen_connect()
{
	sock = socket( PF_INET,SOCK_STREAM,0 );
	assert( sock >=0 );

	struct sockaddr_in address;
	bzero( &address,sizeof( address ));
	address.sin_family = AF_INET;
	inet_pton( AF_INET,ip,&address.sin_addr.s_addr);
	address.sin_port = htons( port );


	int ret = bind( sock,( struct sockaddr*)&address,sizeof( address ));
	assert( ret != -1 );

	ret = listen( sock, backlog );
	assert( ret != -1 );
}


int Network_Start::Network_End(int argc,char* argv_0)
{

	    signal( SIGTERM ,handle_term );
	    if( argc <= 3 )
	    {
		printf("usage:%s ip_address port_number backlog\n",basename( argv_0 ));
		return 1;
	    }

		while( ! stop )
		{
		    sleep(1);
		}

		    close( sock );

	    return 0;
}







int main(int argc,char* argv[])
{

    Network_Start S(argv[1],argv[2],argv[3]);
    S.listen_connect();
    S.Network_End(argc,argv[0]);

return 0;
}




