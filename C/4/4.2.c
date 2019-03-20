#include <stdio.h>

int main(void)
{
	int test,num1,num2,num3;
	int count = 0;
	printf("please input 3 number:\n");
		scanf("%d",&test);

		if( test <= 99 )
		{
			printf("input error!\n");
		}else{
		
			num1 =	test/100;
			num2 = (test % 100)/10;
			num3 = (test % 100) % 10;
	
				printf("%d\n",num1*1+num2*10+num3*100);


		}






return 0;
}



