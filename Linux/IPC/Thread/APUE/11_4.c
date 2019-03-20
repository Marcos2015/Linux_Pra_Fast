#include <stdio.h>
#include "apue.h"
#include <pthread.h>


struct foo
{
	int a,b,c,d;
};

void printfoo(const char* s,const struct foo* fp)
{
	printf("%s",s);
	printf(" structure at 0x%lx\n",(unsigned long)fp);
	printf(" foo.a = %d\n",fp->a);
	printf(" foo.a = %d\n",fp->b);
	printf(" foo.a = %d\n",fp->c);
	printf(" foo.a = %d\n",fp->d);

}





void * thr_fn2(void * arg)
{
	int err;
	pthread_t tid1,tid2;
	struct foo* fp;
	err = pthread_create( &tid1, NULL, thr_fn2, NULL );
	if(err != 0)
	{
		printf("can't create thread 1\n");
	}

}


int main()
{

	return 0;
}


