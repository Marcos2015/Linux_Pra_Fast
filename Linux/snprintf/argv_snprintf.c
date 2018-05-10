#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
	int len=0;
	char buffer[128];
	int i=1;

	while(i<argc)
	{
		len=strlen(argv[i]);
		if(len >= 128)exit(1);

		snprintf(buffer,len+1,"%s",argv[i]); //strlen no include '\0';so add +1
		i++;

	}

	printf("%s",buffer);
	fflush(stdout);
	return 0;
}






