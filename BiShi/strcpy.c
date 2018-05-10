#include <assert.h>
#include <stdio.h>

char* my_strcpy(const char * src, char* des)
{
	char* ret=des;

	assert( src!=NULL && des != NULL );

	while( *des++ = *src++ );
		*des='\0';

return ret;
}


int main()
{
	char Hello[5];
	char* cp="zhaofeng";
	my_strcpy( cp , Hello );
		printf("%s\n",Hello);
return 0;
}


