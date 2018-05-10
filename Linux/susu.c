#include <stdio.h>

int main(void)
{
	int num,j,first_num,last_num;
	int flag=0;
	printf("please enter two number:\n");
	scanf("%d %d",&first_num,&last_num);

for(first_num;first_num <= last_num;first_num++)
{
	//flag=1;	
	for(int i=2 ;i < first_num;i++)
	{
		if( first_num % i == 0 )
		{
			flag=0;
			printf("NO,the number %d isn't susu\n",first_num);
			break;// 跳出整个for循环
			
		}else{
			flag=1;

			}
	}
		if(flag)
		{
			printf("%d\n",first_num);
		}


}


return 0;
}



