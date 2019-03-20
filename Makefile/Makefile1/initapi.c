#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void initRand()
{
	time_t seed;
	seed = time( NULL );
	srand( seed );
return ;
}


