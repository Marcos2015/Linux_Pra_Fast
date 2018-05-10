#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void GetMem( void* p, int size )
{
		p=malloc(size);
		memset(p,0,size);
}

int main()
{
		int* p;
		GetMem((void*)p,sizeof(int));
		printf("*p=%d\n",*p);
return 0;

}

