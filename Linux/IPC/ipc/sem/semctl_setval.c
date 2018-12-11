#include <stdio.h>
#include <sys/sem.h>
#include <stdlib.h>


int main()
{
		int semid=semget(0x123456789,1,0),cnt;
		if(semid>=0)
		{
				//cnt=semctl(semid,0,SETVAL,18);
				//cnt=semctl(semid,0,SETVAL,10);
				cnt=semctl(semid,8,SETVAL,18);

				if(cnt!=-1)
				{
						printf("semcrd: semaphore count updated\n.");
				}

		}

		return 0;
}


