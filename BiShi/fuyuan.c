#include <stdio.h>


int main()
{
	   int a[5]={1,2,3,4,5};
	   int *ptr=(int *)(&a+1);
	         printf("%d,%d\n",*(a+1),*(ptr-1));// *(a+1): a,&a 的值是一样的，但意思不一样，a 是数组首元素的首地址，也就是a[0]的首地址，&a 是数组的首地址，a+1 是数组下一元素的首地址，即a[1]的首地址,&a+1 是下一个数组的首地址。所以输出2*(ptr-1): 因为ptr 是指向a[5]，并且ptr 是int * 类型，所以*(ptr-1) 是指向a[4] ，输出5。
}
