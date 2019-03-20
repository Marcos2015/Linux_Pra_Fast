#include <stdio.h>


int main(void)
{
	int test,num1,num2;
	printf("please input one number:\n");
	scanf(" %d",&test);
		if( test <= 0 )
		{
			printf("input error:\n");
		}else{
				 num1 = test / 10 ;
				 num2 = test % 10;
		}

		printf("%d\n", num2*10+num1);
return 0;
}



