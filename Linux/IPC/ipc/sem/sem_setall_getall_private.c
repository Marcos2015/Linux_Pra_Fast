#include <sys/sem.h>
#include <stdio.h>
#include <sys/types.h>
#include <errno.h>

#define MAX_SEMAPHORES 10


int main()
{
		int i,ret,semid;
		unsigned short sem_array[MAX_SEMAPHORES];
		unsigned short sem_read_array[MAX_SEMAPHORES];


		union semun
		{
				int val;
				struct semid_ds *buf;
				unsigned short *array;
		}arg;


		semid=semget(IPC_PRIVATE,MAX_SEMAPHORES,IPC_CREAT|0666);

		if(semid != -1)
		{

			/* SETALL*/	
				for(i=0;i<MAX_SEMAPHORES;i++)
				{
						sem_array[i]=(unsigned short)i+1;
				}
		

				arg.array=sem_array;
				ret=semctl(semid,0,SETALL,arg);
				if(ret==-1)printf("SETALL is fail\n");


			/*GETALL*/

				arg.array=sem_read_array;
				ret=semctl(semid,0,GETALL,arg);
				if(ret==-1)printf("GETALL is fail\n");
					for(i=0;i<MAX_SEMAPHORES;i++)
					{
							printf("Semaphores %d,value %d\n",i,sem_read_array[i]);
					}


			/*GETVAL*/

					for(i=0;i<MAX_SEMAPHORES;i++)
					{
						ret=semctl(semid,i,GETVAL);
							printf("Semaphore %d,value %d\n",i,ret);
					}


			/*rmid*/
					ret=semctl(semid,0,IPC_RMID);
		}
		else
		{
			printf("Could not alloate semphore (%d)\n",errno);
		}

return 0;
}









