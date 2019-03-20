#include  <stdio.h>


char* GetMemory(void)
{
	char p[]="Hello world" ;
return p;
}


void Test(void)
{
	char* str = NULL ;
	str = GetMemory() ;
	printf("%s\n",str);
}

int main(void)
{
	Getmemory();
	Test();
return 0;
}



