#include <stdio.h>
#include <sys/msg.h>
#include "common.h"

int main()
{
		struct msqid_ds buf;
		int msg_id=msgget(MSG_KEY,0);
		if(msg_id >= 0 )
		{
				int ret=msgctl(msg_id,IPC_STAT,&buf);
				buf.msg_qbytes=17408;
				ret=msgctl(msg_id,IPC_SET,&buf);
				
				if(ret == 0 )
				{
						printf("Size successful changed for queue %d\n",msg_id);
				}
		}
return 0;
}


