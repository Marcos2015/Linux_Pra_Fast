#include <stdio.h>
#define SQR(y) (y*y)

int main()
{
		int a=1;
		int b=2;
		int c=SQR(a+b);// 1+2*1+2=5  define 只是替换,a+b*a+b = 1+2*1+2 =5
		printf("%d\n",c);
return 0;
}




