#include <stdio.h>


int main(int argc,char* argv[])
{
	int i;
	//for(i=0;i<argc;i++)
	for(i=0;argv[i] != NULL; i++)
	{
	    printf("%s\t",argv[i]);
	}

	putchar(10);
	

    return 0;
}


