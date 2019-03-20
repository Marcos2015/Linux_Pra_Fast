#include <stdio.h>
#include <stdlib.h>

int BubbleSort(int* p,int len)
{
	int i,j,temp;
	for(i=0;i<len-1;i++)   //进行n-1次排序才可以完整排序完成
	{
		for(j=0;j<len-1;j++)  //如果后一项比前一项大,那么就前后置换,同样也是要进行n-1次循环比较.(和外循环一样进行n-1次)
		{
			if(p[j]<p[j+1])
			{
			    temp=p[j];
			    p[j]=p[j+1];
			    p[j+1]=temp;
			}
		}
	}

	for(int i=0;i<len;i++)
	{
		printf("%d\t",p[i]);
	}

	putchar(10);
return 0;
}




int main()
{
	int qu[5]={89,78,7,34,9};
	int len=sizeof(qu)/sizeof(qu[0]);
	BubbleSort(qu,len);

return 0;
}


