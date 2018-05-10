#include <stdio.h>


int  main()
{
	int a[3]={1,2,3};
	int b=4;
	int **p=0;
	p=&a;//数组名字不可以赋值给指针，&数组名，是不符合语法的。因为a是常数地址，是没有地址的地址。

		(*p)[0]=3;
		int sum = b + a[1] + *(*p+1) + (*p)[2];
		printf("sum = %d\n",sum );
return 0;
}










