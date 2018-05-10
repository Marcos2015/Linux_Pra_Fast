#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <errno.h>
#include <unistd.h>

 
 int gnum = 0;
 pthread_mutex_t mutex;
 pthread_cond_t  cond;
  
  static void pthread_func_1 (void);
  static void pthread_func_2 (void);
   
int main (void)
{
	       pthread_t pt_1 = 0;
	       pthread_t pt_2 = 0;
		int ret = 0;
		        
	pthread_mutex_init (&mutex, NULL);
        pthread_cond_init(&cond, NULL);
	ret = pthread_create (&pt_1, NULL, (void *)pthread_func_1, NULL);
          if (ret != 0)
	 {
		perror ("pthread_1_create");
	 }
									      
				ret = pthread_create (&pt_2, NULL, (void *)pthread_func_2, NULL);
				if (ret != 0)     
				{
					perror ("pthread_2_create");
				}
		pthread_join (pt_1, NULL);
		pthread_join (pt_2, NULL);
															            
				printf ("main programme exit!\n");
				return 0;
}




     
static void pthread_func_1 (void)     
{     
	         int i = 0;
		 for (;;)
	         {
		    printf ("This is pthread1!\n");
		    pthread_mutex_lock(&mutex);
			//注意，这里以防线程的抢占，以造成一个线程在另一个线程sleep时多次访问互斥资源，所以sleep要在得到互斥锁后调用 
			sleep (1);
                       //条件变量，当gnum<=3时，线程1自己挂起并且解锁，让线程2进去
			while (gnum <= 3) {
				pthread_cond_wait(&cond, &mutex);
			 }  
																    
			//当线程2调用pthread_cond_signal(&cond)时，线程1在这里重启
			//临界资源
			
				printf("when gum=4,send a signal....to Thread1.........\n");
				gnum=gnum+100;
		printf ("Thread1 add one to num:%d\n",gnum);
	        pthread_mutex_unlock(&mutex);
		}     
}




       
static void pthread_func_2 (void)     
{     
	           int i = 0;     
	            for (;;)     
		    {     
			printf ("This is pthread2!\n");
                        pthread_mutex_lock(&mutex);
				 //注意，这里以防线程的抢占，以造成一个线程在另一个线程sleep时多次访问互斥资源，所以sleep要在得到互斥锁后调用 
			sleep (1);
                          //临界资源
		gnum++;
			printf ("Thread2 add one to num:%d\n",gnum);
		//当gnum == 4时，触发
			if (gnum == 4)
			{
				pthread_cond_signal(&cond);
				//usleep(1000);
			}
			pthread_mutex_unlock(&mutex);             
		 }      
			pthread_exit (0);     
}
        

