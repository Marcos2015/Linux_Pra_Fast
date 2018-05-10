#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <pthread.h>


pthread_t mythread;
pthread_t mythread_2;

void* second_mythread(void* arg);
void* myThread( void* arg );


int main()
{
	int ret,ret_2;

	ret=pthread_create(&mythread,NULL,myThread,NULL );
	//ret_2=pthread_create(&mythread_2,NULL,second_mythread,NULL);
	
	if(ret)
	{
		printf("Can't create pthread (%s)\n",strerror(errno));
	

	exit(-1);
	}


	pthread_detach(mythread);
	int vari=pthread_join(mythread,NULL);
	if(vari)
	{
		printf("mythread join failed,vari=%d\n",vari);
	}



return 0;
}








void* myThread( void* arg )
{
	printf("Thread run\n");
	//pthread_detach(mythread);
return NULL;
}



void* second_mythread(void* arg)
{
	int ret_join=pthread_join(mythread,(void**)&arg);

	if(ret_join)
	{
		printf("pthread_join has't join mythread\n");
	}

	printf("second thread,%ld\n,(long)arg");
return NULL;
}


