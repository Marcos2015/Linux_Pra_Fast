#include <iostream>
using namespace std;

/*
int main( int argc, char* argv[] )
{
	int  j;
	for( j = 0 ;j < argc ; j++ )
	{
		puts( argv[j] );
	}

	exit( EXIT_SUCCESS );
}
*/

/*
int main( int argc, char* argv[] )
{
	int  j;
	for( j = 0 ;j < argc ; j++ )
	{
	    printf( "argv[%d]=%s\n",j,argv[j] );
	}

	exit( EXIT_SUCCESS );
}
*/


int main( int argc, char* argv[] )
{
	
	char** p;
	for( p= argv ; *p != NULL ; p++ )
	{
		puts( *p );
	}

	exit( EXIT_SUCCESS );
}
