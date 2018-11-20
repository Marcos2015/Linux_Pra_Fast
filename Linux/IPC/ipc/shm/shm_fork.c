#include <sys/types.h>
#include <errno.h>
#include <string.h>
#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>

int main()
{
		int shmid,ret;
		pid_t pid;
		void* mem;
		shmid=shmget(0x9862,256,IPC_CREAT|0666);
		printf("Parenr process shmid=%d\n",shmid);

		if(shmid==-1)
		{
				printf("creat share memory segment fail\n");
		}

		mem=shmat(shmid,0,0);
		if(mem!=(void*)-1)
		{
				printf("Parent process have been attached share memory.\n");
				strcpy((char*)mem,"This is put string into Parent_process share memory.\n");
				printf("Parent process output mem :%s\n",(char*)mem);
		}
		else if(mem == (void*)-1)
		{
						printf("Sub_process attached memory  fail\n");
		}

		pid=fork();
		if(pid<0)
		{
				printf("fork() fail\n");
		}
		else if(pid==0)
		{
				sleep(10);
//				int shmid_sub=shmget(0x9862,0,0);
				printf("Sub_process shmid=%d\n",shmid);
//						printf("Sub process output mem :%s\n",(char*)mem);

						printf("Sub process output mem :%s\n",(char*)mem);
						strcpy((char*)mem,"Have been Sub_process changed share memory\n");
						printf("Sub process output mem :%s\n",(char*)mem);
	/*			
					int ret=shmdt(mem);
					if(ret==-1)
					{	
							fprintf(stderr,"Sub_process detached share memory fail:%d(%s\n)",errno,strerror(errno));
					}

	*/
		}

		sleep(10);

		int ret_shmdt=shmdt(mem);
					if(ret_shmdt == -1)
					{	
							fprintf(stderr,"Parent_process detached share memory  fail:%d(%s\n)",errno,strerror(errno));
					}
	

		return 0;
}

