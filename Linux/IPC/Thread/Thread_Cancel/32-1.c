#include <stdio.h>
#include <pthread.h>

static void* threadFunc(void* arg)
{
	int j;
	printf("New thread started\n");
	for(j=1; ;j++)
	{
		printf("Loop %d\n",j);
		sleep(1);
	}

	return NULL;
}


int main(int argc,char* argv[])
{
	pthread_t thr;
	int s;
	void* res;

		s=pthread_create(&thr,NULL,threadFunc,NULL);
		//if(s!=0)printf("Create Failed\n");

		//sleep(3);

		s=pthread_cancel(thr);
		//if(s!=0)printf("pthread_cancel failed!\n");

		s=pthread_join(thr,&res);
		//if(s!=0)printf("join Failed\n");


	if(res==PTHREAD_CANCELED)printf("Thread was cancel\n");
	else
		printf("thread was not cancel(should  not happen!)\n");


exit(0);
}



