#include <stdio.h>

int main()
{
/*
	int i=900;
	char vf[1025];

		sprintf(vf,"%d\n",i);
	printf(vf);
*/


	char * str="Hello world";
	char str_test[5];
		int num=sprintf(str_test,"%s\n",str);
		printf("%d\n",num);
		str_test[num-1]='\0';

		printf(str_test);
return 0;
}


