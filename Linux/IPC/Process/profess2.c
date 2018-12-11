#include <stdio.h>
#include <unistd.h>


int main ()
{
	printf("Start.......\n");
	pid_t h=fork();
	printf("Endl..........\n");
/*
	if( h > 0 )printf("this is Father Profess......\n");
	 if( h == 0 )printf("this is Child Profess......\n");
*/



return 0;
}


