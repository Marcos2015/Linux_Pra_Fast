#include <stdio.h>
#include <pthread.h>
#include <unistd.h>


pthread_t ntid;


void printids(const char* s)
{
		pid_t pid;
		pthread_t tid;

		pid=getpid();
		tid=pthread_self();
		printf("%s  is : %lu\n",s,(unsigned long )tid);


};





void * thr_fn(void* arg)
{
	printids("new thread");
	return ((void*) 0);
}





int main()
{
	
	int err;
	err = pthread_create(&ntid,NULL,thr_fn,NULL);
	if(err != 0)
	{
			printf("the thread can't be create !\n");
	}
		printf("use &ntid get new pthread ID: %lu\n",(unsigned long)ntid);



	pthread_t th=pthread_self();
	printf("nothing for any to get main_pthread ID:%lu \n",(unsigned long)th);
	printids("main thread");


//sleep(2);



return 0;
}


