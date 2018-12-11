#include <stdio.h>
#include <sys/sem.h>

#define SEMID 0x123456789

int main()
{
		int semid=semget(SEMID,10,IPC_CREAT|0666);
		if(semid >= 0)
		{
				printf("semcreat:Created a semaphore %d\n",semid);
		}
		else
		{
				printf("sem create fail\n");
		}


		return 0;
}

