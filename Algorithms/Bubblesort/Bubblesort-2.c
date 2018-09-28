#include <stdio.h>
#include <stdlib.h>


int BubbleSort(int* p,int len)
{
	int i,j,temp;

	for(i=0;i<len-1;i++)
	{
		for(j=0;j<len-1;j++)
		{
			if(p[j]>p[j+1])
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}

	for(i=0;i<len-1;i++)
	{
		printf("%d\t",p[i]);
	}

putchar(10);

return 0;
}


int main()
{
	int Road[9]={19,4,80,20,9,2,56,45,67};
	int len=sizeof(Road)/sizeof(Road[0]);
	BubbleSort(Road,len);

return 0;
}


