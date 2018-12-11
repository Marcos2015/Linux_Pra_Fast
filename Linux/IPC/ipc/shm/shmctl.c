#include <stdio.h>
#include <sys/shm.h>
#include <errno.h>

int main()
{
		int shmid,ret;
		struct shmid_ds shmds;


		shmid=shmget(0x12367,0,0);
		if(shmid>=0)
		{
				ret=shmctl(shmid,IPC_STAT,&shmds);
				if(ret=0)
				{
						printf("sizeof of memory segment is %d\n",shmds.shm_segsz);
						printf("Number of attaches %d\n",(int)shmds.shm_nattch);
				}
				else
				{
					fprintf(stderr,"contrl fail is:%d(%s\n)",errno,strerror(errno));
				}
		}
		else
		{
				printf("Share memory segment not found.\n");
		}

return 0;
}


