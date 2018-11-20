#include <stdio.h>
#include <sys/msg.h>
#include "common.h"

int main()
{
		MY_TYPE_T myobject;
		int qid,ret;

		qid=msgget(MSG_KEY,0);
		if(qid >= 0)
		{
				ret=msgrcv(qid,(struct msgbuf*)&myobject,sizeof(MY_TYPE_T),1,0);

				if(ret != -1)
				{
						printf("Message Type:%ld\n",myobject.type);
						printf("Float value:%f\n",myobject.fval);
						printf("Uint value:%d\n",myobject.uival );
						printf("String Value:%s\n",myobject.strval);
				}

		}

return 0;
}


