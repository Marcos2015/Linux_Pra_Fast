#include <stdio.h>
#include <sys/sem.h>
#include <stdlib.h>

#define SEMID 0x123456789

int main()
{
		int semid,i;
		struct sembuf sb[1];
/*
		struct sembuf sb[10];
	
			semid=semget(SEMID,10,0);

			if(semid>=0)
			{
					for(i=0;i<10;i++)
					{
							sb[i].sem_num=i;
							sb[i].sem_op=-1;
							sb[i].sem_flg=0;
					}

			}
*/

		semid=semget(0x123456789,1,0);
			if(semid>=0)
			{
					sb[0].sem_num=0;
					sb[0].sem_op=-1;
					sb[0].sem_flg=0;
			}

			printf("semaccq:Attempting to acquire semaphore %d\n",semid); /* try to get sem*/


			if(semop(semid,sb,1)==-1)
			{
//					printf("semacq:sem failed.\n");
//					exit(-1);
			}

			printf("semacq:Semaphore acquired %d\n",semid);


return 0;
}
