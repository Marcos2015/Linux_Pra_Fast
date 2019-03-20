#include <stdio.h>

int main()
{

	int test[5];
	int Max=0;
	printf("Please input five number:\n");
		for(int i=0;i < 5 ;i++)
		{
			scanf("%d",&test[i]);
			if(test[i] > Max )
			{
				Max=test[i];
			}
		}
		printf(" The Max number  is %d\n",Max);
return 0;
}






