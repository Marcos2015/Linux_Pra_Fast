#include <stdio.h>
#include <sys/msg.h>
#include "common.h"

int main()
{
		MY_TYPE_T myobject;
		int ret;
		int qid=msgget(MSG_KEY,0);
		if(qid>0)
		{
			myobject.type=1L;
			myobject.fval=128.256;
			myobject.uival=512;
			strncpy(myobject.strval,"This is a test.\n",MAX_LINE );

			ret=msgsnd(qid,(struct msgbuf*)&myobject,sizeof(MY_TYPE_T),0);

			if(ret !=-1)
			{
					printf("Message successful sent to queue %d\n",qid);
			}
		}
return 0;
}


