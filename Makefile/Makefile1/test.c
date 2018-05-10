#include <stdio.h>
#include "randapi.h"
#define ITERATTIONS 1000000L

int main()
{
	long i ;
	long isum ;
	long fsum ;

	initRand();

	isum = 0L;
	for( i = 0 ; i < ITERATTIONS ; i++ )
	{
		isum += getRand( 10 );
	}

printf( "getRand() Average %d\n",( int )( isum / ITERATTIONS ) );

	fsum = 0.0;
	for( i = 0;i < ITERATTIONS ;i++ )
	{
		fsum += getSRand();
	}


printf( "getSRand() Average %f\n",(fsum / ( float )ITERATTIONS ) );

return 0;
}





