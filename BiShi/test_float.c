#include <stdio.h>

int test_float_h( float flag );


int main()
{
//	test_float_h( 0.00000 );
	test_float_h( 0.004 );
		
return 0;
}


int test_float_h( float flag )
{
	const float NORM = 0.00001;
	if(( flag >= NORM ) && ( flag <= NORM ))
	{
		printf("A\n");
	}
	else
	{
		printf("B\n");
	}

return 0;
}

