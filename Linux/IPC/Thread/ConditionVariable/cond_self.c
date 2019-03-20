#include <stdio.h>
#include <pthread.h>

pthread_cond_t self_cond = PTHREAD_COND_INITIALIZER;
pthread_mutex_t self_mutex = PTHREAD_MUTEX_INITIALIZER;

int x = 19;

void * self_function( void * arg)
{
     for( int i=0;i < 5 ; i++)
     {
	     printf("self_function.......%d\n",i);
     }

		    pthread_cond_wait(&self_cond,&self_mutex);

	       
		    return NULL;
}


void * self_second( void* arg) 
{
	printf("It's over ,this is second function\n");
	    pthread_cond_signal( &self_cond );
	return NULL;
}



int main()
{
	pthread_t thread_1;
	pthread_mutex_lock(&self_mutex);
	    
	    while(1)
	    {
		    int iRet=pthread_create(&thread_1,NULL,&self_function,NULL);
		    if( iRet )
		    {
			    printf("create error,the iRet = %d\n", iRet);
		    }
	    }

    pthread_mutex_unlock( &self_mutex );


return 0;
}






