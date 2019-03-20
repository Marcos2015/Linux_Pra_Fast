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
		    printf("Beginng..........the.................................... pthread1\n");
		    //sleep(1);//如在此注释sleep(1),线程2会自动抢占锁，但在之后会和线程1交替抢到锁，分别运行自己的对共享变量的操作。
		    pthread_mutex_lock(&mutex);
			//注意，这里以防线程的抢占，以造成一个线程在另一个线程sleep时多次访问互斥资源，所以sleep要在得到互斥锁后调用,先把锁抢到了再用1秒的停顿隔间时间打印共享变量，否则如放在前面睡眠一秒sleep(1)，则无法抢到锁了。 
			sleep (1);
                       //条件变量，当gnum<=3时，线程1自己挂起并且解锁，让线程2进去
			while (gnum <= 3) {
				pthread_cond_wait(&cond, &mutex);//gnum<=3是未达到我们想要的状态，使用pthread_cond_wait令调用线程处于阻塞状态，并解锁互斥量，等待条件变量达到预想中的条件，此时线程处于阻塞状态；当线程当收到pthread_cond_signal()发出的信号时则苏醒，继续执行代码，并不会因为pthread_cond_wait导致一直休眠。
			 }  
			//当线程2调用pthread_cond_signal(&cond)时，线程1在这里重启
			//临界资源
//				printf("when gum=4,send a signal....to Thread1.........\n");
				gnum=gnum+100;
		printf ("This is pthread1......,Thread1 add 100 to num:%d\n",gnum);
	        pthread_mutex_unlock(&mutex);
		}     
}




       
static void pthread_func_2 (void)     
{     
	           int i = 0;     
	            for (;;)     
		    {     
                        pthread_mutex_lock(&mutex);
	//注意，这里以防线程的抢占，以造成一个线程在另一个线程sleep时多次访问互斥资源，所以sleep要在得到互斥锁后调用 
			// sleep (1);
                          //临界资源
		gnum++;
			printf ("Thread2 add one to num:%d,This is pthread2\n",gnum);
		//当gnum == 4时，触发
			if (gnum == 6)
			{
				pthread_cond_signal(&cond);
				usleep(1);   //如果不睡眠，则有可能会导致gnum=4时，线程2释放掉锁的时候，线程1还没抢到锁，线程2就再次自己率先抢到锁进行+1运行。
			}
			pthread_mutex_unlock(&mutex);             
		 }      
			pthread_exit (0);     
}
        

