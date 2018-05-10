#include <stdio.h>


typedef char* byte_pointer;



int main()
{
	int val = 0x00000001;
	byte_pointer valp = (byte_pointer)&val;

	
//	printf("%d\n",0x87654321);
	printf("%d\n",val);
	return 0;
}



