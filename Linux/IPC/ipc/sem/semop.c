#include <stdio.h>
#include <sys/sem.h>
#include <stdlib.h>

int main()
{
		int semid,i;
		struct sembuf sb[10];

		semid=semget(0x234,10,0);

		if(semid >=0 )
		{
				for(i=0;i<10;i++)
				{
						sb[i].sem_num=i;
						sb[i].sem_op=-1;
						sb[i].sem_flg=0;
				}
		}
				printf("semaacq:Attempting to acquire semaphore %d\n",semid);


				if(semop(semid,&sb[0],10)==-1)
				{
						printf("semaphore:semop fialed.\n");
						exit(-1);
				}

				printf("semaacq:Semaphore acquire %d\n",semid);
		

return 0;
}


