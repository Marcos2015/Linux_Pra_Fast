#include <unistd.h>
#include <stdio.h>


int main()
{
		printf("test getpagesize=%d\n",getpagesize());

		printf("test sysconf=%ld\n",sysconf(_SC_PAGESIZE));

return 0;

}


