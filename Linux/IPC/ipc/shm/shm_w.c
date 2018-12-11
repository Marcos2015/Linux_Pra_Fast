#include <errno.h>
#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <string.h>
#define  MAX_MEM 4096


int main()
{
	int shmid;
	int ret;
	void* mem;

	shmid=shmget(0x12367,MAX_MEM,IPC_CREAT| 0666 );
	printf("shmid is = %d,pid=%d\n",shmid,getpid());
	mem=shmat(shmid,(const void*)0,0);
	if((int)mem==-1)
	{
		fprintf(stderr,"Attach fail because:%d(%s\n)",errno,strerror(errno));
	}

	strcpy((char*)mem,"Hello,this is test memory.\n");

	ret=shmdt(mem);
	if( 0 == ret )
	{
			printf("Share memory segment detached successful\n");
	}
	else
	{
			printf("Share memory segment detached  fail\n");
	}

return 0;
}



