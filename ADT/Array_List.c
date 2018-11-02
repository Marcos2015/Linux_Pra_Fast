#include <stdio.h>

const Maxsize = 20;

enum returninfo
{
	success,
	fail,
	overflow,
	underflow,
	range_error
};


int dataarray[ Maxsize ];
int count;
returninfo create( int number );
bool empty( void );
int length( void );



/*create*/

returninfo create( int number )
{
	count = number;
	printf("请依次输入数据(用空格隔开): \n");
	for( int i = 0 ;i < count ;i++ )
	{
		scanf( "%d",&dataarray[i] );
	returninfo success;
	}
}




