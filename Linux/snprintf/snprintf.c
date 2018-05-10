#include <stdio.h>


int main()
{
/*
	char snp_test[5];
	char * s="I'm from China";

		int num=snprintf(snp_test,8,"%s",s);
		printf("%d\n",num);
		printf(snp_test);
	return 0;
*/
	char snp[10]={0};
	char *r="0123456789abcdefghijk";
//	char *r="012345678";
//		int num=snprintf(snp,sizeof(snp),"%s",r);
		int num=snprintf(snp,18,"%s",r);
		printf("%d\n",num);
		printf(snp);
		printf("\n");
	return 0;
}



