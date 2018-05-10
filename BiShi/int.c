
#include <stdio.h>

int RetMemory(void)
{
	int q=10;
return q;
}


void Test(void)
{
	int str=RetMemory();
	printf("%d\n",str);
}


int main(void)
{

	RetMemory();
	Test();
return 0;
}


