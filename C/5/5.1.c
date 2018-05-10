#include <stdio.h>


int main()
{
	long int test_po;
	printf("please input number:\n");
		scanf("%ld",&test_po);
	if( (test_po/100000) > 0 )printf("input Error\n");
	else if ((test_po/10000) > 0)
	{
		printf("five\n");
	}else if( (test_po/1000) > 0)
	{
		printf("four\n");
	}else if ( (test_po/100) > 0)
	{
		printf("three\n");
	}else if( (test_po / 10) > 0)
	{
		printf("two\n");
	}else{
		printf("One\n");
	}

return 0;
}




