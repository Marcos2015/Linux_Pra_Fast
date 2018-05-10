#include <stdio.h>

char* RetMemory(void)
{
	char p[]="Hello world";
return p;
}


void Test(void)
{
	char* str=NULL;
	str=RetMemory();
	printf("%s",str);
}


int main(void)
{

	RetMemory();
	Test();
return 0;
}


