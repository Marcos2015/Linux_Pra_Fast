#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

struct my_file
{
	int num;
	pthread_rwlock_t lock_num;
};

void* write1(void* arg)
{
	struct my_file *file_info=(struct my_file*)arg;
	pthread_rwlock_wrlock(&file_info->lock_num);
	printf("write1:my_file->num:%d,process=%d,thread num:%d\n",file_info->num++,getpid(),pthread_self());
	pthread_rwlock_unlock(&file_info->lock_num);
return ((void*)1);
}

void* write2(void* arg)
{
	struct my_file *file_info=(struct my_file*)arg;
	pthread_rwlock_wrlock(&file_info->lock_num);
	printf("write2:my_file->num:%d,process=%d,thread num:%d\n",file_info->num++,getpid(),pthread_self());
		sleep(2);
	pthread_rwlock_unlock(&file_info->lock_num);
return ((void*)2);
}




void* read1(void* arg)
{
	struct my_file* file_info=(struct my_file*)arg;
	printf("Enter read:\n");
	pthread_rwlock_rdlock(&file_info->lock_num);
	printf("Read:my_file->num:%d,process=%d,thread num:%d\n",file_info->num++,getpid(),pthread_self());
		pthread_rwlock_unlock(&file_info->lock_num);
	printf("after read:\n\n\n");
return ((void*)3);
}



int main(void)
{
	pthread_t th1,th2,th3;
	struct my_file * test;
	test=(struct my_file*)malloc(sizeof(struct my_file)*1);
	if(test==NULL)
	{
		printf("allocate is failed");
	return 0;
	}


test->num=0;
pthread_rwlock_init(&test->lock_num,NULL);

int ret;
while(test->num < 5)
{
	ret=pthread_create(&th1,NULL,write1,test);
	if(ret != 0)
	{
		perror("pthread1 error\n");
		return 0;
	}

	usleep(1000);


	pthread_create(&th2,NULL,write2,test);
	if(ret != 0)
	{
		perror("pthread2 error\n");
		return 0;
	}
	usleep(1000);



	pthread_create(&th3,NULL,read1,test);
	if(ret != 0)
	{
		perror("pthread3 error\n");
		return 0;
	}


		pthread_join(th3,NULL);
		pthread_rwlock_destroy(&test->lock_num);
}


		free(test);
		test=NULL;
return 1;
}

