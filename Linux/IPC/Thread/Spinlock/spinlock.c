#include <stdio.h>
#include <pthread.h>


pthread_spinlock_t lock;

void lockandunlock()
{
	int i=10;
	while(i>0)
	{
		pthread_spin_lock(&lock);//自旋锁加锁
		i--;
		pthread_spin_unlock(&lock);//自旋锁解锁
			printf("%d\n",i);
	}

}


int main()
{
	pthread_spin_init(&lock,PTHREAD_PROCESS_PRIVATE);
	lockandunlock();
	pthread_spin_destory(&lock);

return 0;
}


