#include <stdio.h>

int main()
{
	int test[4][4];
	printf("please input 4 number: \n");
	
for(int j=0; j < 4 ; j++)
{
	for(int i=0;i < 4 ; i++)
	{
		scanf("%d",&test[j][i]);
	}
	printf("\n");
}



for(int j=0; j < 4 ; j++)
{
	for(int i=0;i < 4 ; i++)
	{
		printf("%d ",test[j][i]);
	}
	printf("\n");
}


return 0;
}


