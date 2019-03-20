#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//that's right:

/*
void GetMemory(char**p)
{
		*p=(char*)malloc(100);
}


void test(void)
{
		char* str=NULL;
		GetMemory(&str);
		strcpy(str,"Hello");
		printf(str);
}
*/

//bug:
void GetMemory(char*p)
{
		p=(char*)malloc(100);
}


void test(void)
{
		char* str=NULL;
		GetMemory(str);
		strcpy(str,"Hello");
		printf(str);
}
int main()
{
		test();
return 0;
}



