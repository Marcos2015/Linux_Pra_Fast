#include <stdio.h>


char* strrev(char* s)
{
	char* h=s;
	char* t=s;
	char ch;

		while(*t++){};
			t--;
			t--;

	while( h<t )
	{
		ch=*h;
		*h++=*t;
		*t--=ch;
	}

return(s);
}

int main()
{
	char*s="1234567";
	strrev(s);
	printf("%s\n",s);
return 0;
}


