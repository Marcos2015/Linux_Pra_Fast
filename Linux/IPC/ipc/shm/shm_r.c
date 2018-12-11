#include <errno.h>
#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <string.h>
#define MAX_MEM 4096

int main()
{
		int shmid;
		int ret;
		void* mem;

		shmid=shmget(0x12367,0,0);
		mem=shmat(shmid,(const void*)NULL,0);
		printf("%s\n",(char*)mem);
		if(mem==(void*)-1)
		{
			fprintf(stderr,"shmat return NULL ,errno(%d:%s)\n",errno,strerror(errno));
			return 2;
		}
		
		ret=shmdt(mem);
		if(ret==0)
		{
				printf("share memory detached successful\n");
		}
		else
		{
				printf("share memory detached fail\n");
		}

/*
		if(ret=shmctl(shmid,IPC_RMID,0)==-1)
		{
				printf("remove share memory segment fail\n");
		}
*/

		return 0;
}


