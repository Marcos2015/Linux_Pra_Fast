#include <stdio.h>
#include <sys/sem.h>
#include <stdlib.h>


int main()
{
		int semid=semget(0x123456789,1,0),cnt;
		if(semid>=0)
		{
				cnt=semctl(semid,0,GETVAL);

				if(cnt!=-1)
				{
						printf("semid:current semaphore count %d.\n",cnt);
				}

		}

		return 0;
}


