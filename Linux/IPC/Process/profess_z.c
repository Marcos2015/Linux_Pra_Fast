#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>

int main()
{

	int i;

	pid_t pid;
	for (i = 0; i < 10; ++i)
	{

		pid = fork();
		switch(pid)
		{
			case -1:
			perror("fork");
			exit(-1);
			case 0: //child
			printf("I am child");
			exit(0);

			default:
			break;

		}
	}

	while (1)
	{
		sleep(1);

		printf("I am parent\n");

	}
	return 0; //will never reach here

}

/*
这段程序就可以产生10个僵尸进程，编译执行后ps -ef查看，<defunct>就表示僵尸进程。原理是产生子进程之后它只打印一句话就退出，而父进程最终进入while无限循环，所以不退出，并且它没有调用wait()或者waitpid()函数清理子进程，所以子进程全部成为僵尸进程；如果父进程退出，那么不会产生僵尸进程，因为子进程被过继给1号进程（init进程），init进程负责清理子进程
*/

/*
何谓僵尸进程？
         在linux系统中，一个已经终止但父进程尚未对其进行善后处理（释放子进程相关信息占用的资源）的子进程叫做僵尸进程 。子进程结束时，父进程调用pid_t wait(int *statloc)或者pid_t waitpid(pid_t pid,int *statloc,int options)获取内核中为子进程保存的信息（进程id，终止状态）。
	 凡父进程不调用wait函数族获得子进程终止状态的子进程在退出时都会变成僵尸进程。

*/


