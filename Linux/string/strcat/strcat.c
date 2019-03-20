#include <stdio.h>
#include <string.h>


int main()
{
	char p[10]="Iam " ;
//	strcat(p,"Hell");
	strncat(p,"HelloW",5);//程序正常
//	strncat(p,"HelloW",6);//程序报错，理由同下
/*	strncat(p,"ZhaoFeng",6);将ZhaoFeng中的6个字符追加至p之后，Iam空格 +ZhaoFe刚好等于10个字符，但是strcat其实会追加多一个null字符进p中，所以导致p无法接受11个字符，程序报错。*/

		printf("%s\n",p);
	return 0;
}


