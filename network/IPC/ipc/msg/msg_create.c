#include <stdio.h>
#include <sys/msg.h>
#include "common.h"


int main()
{
	int msgid=msgget(MSG_KEY,IPC_CREAT | 0666 );
	if(msgid >= 0 )
	{
			printf("Create a Message Queue %d\n",msgid );
	}

	return 0;
}


