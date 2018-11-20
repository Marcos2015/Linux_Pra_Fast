#include <stdio.h>
#include <sys/msg.h>
#include "common.h"

int main()
{
		int msg_id,ret;
		msg_id=msgget(MSG_KEY,0) >= 0;
		if( msg_id  >= 0 )
		{
			ret= msgctl(msg_id,IPC_RMID,NULL);
			if(ret==-1)
			{
				printf("Queue %d successful removed.\n",msg_id);
			}

		}
return 0;
}





		
