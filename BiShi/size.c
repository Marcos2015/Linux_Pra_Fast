#include <stdio.h>

char str[]="Hello World!";
char* p=str;
int n=100;

void func(char str[100])
{
		printf("sizeof(str)=%d\n",sizeof(str));
return;
}

int main()
{
		char* k;
		printf("sizeof(str)=%d\n",sizeof(str));
		printf("sizeof(p)=%d\n",sizeof(p));
		printf("sizeof(n)=%d\n",sizeof(n));
		func(k);

			printf("sizeof malloc=%d\n",sizeof(malloc(100)));		
return 0;
}
