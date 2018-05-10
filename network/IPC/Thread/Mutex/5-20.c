#include <stdio.h>
#include <pthread.h>


pthread_mutex_t mutex;
volatile int counter = 0;

void* count(void* param)
{
	for(int i=0;i<13;i++)
	{
		pthread_mutex_lock(&mutex);
		counter++;
		pthread_mutex_unlock(&mutex);
			printf("the counter is:%d\n",counter);
	}

}



int main()
{
		pthread_mutex_init(&mutex,0);
		pthread_t pthread1,pthread2;
		pthread_create(&pthread1,0,count,0);
		pthread_create(&pthread2,0,count,0);
		pthread_join(pthread1,0);
		pthread_join(pthread2,0);
		pthread_mutex_destroy(&mutex);
return 0;
}


