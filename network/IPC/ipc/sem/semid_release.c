#include <stdio.h>
#include <sys/sem.h>
#include <stdlib.h>

int main()
{
		int semid;
		struct sembuf sb[1];
		semid=semget(0x123456789,1,0);
		if(semid >= 0)
		{
				printf("semrel:Release semaphore %d\n",semid);

				sb[0].sem_num=0;
				sb[0].sem_op=1;
				sb[0].sem_flg=0;


				if(semop(semid,sb,1)==-1)
				{
				
						printf("sermrel:semop failed.\n");
						exit(-1);
				}

				
						printf("sermrel: Semaphore release:%d\n",semid);
}


	return 0;
	}


