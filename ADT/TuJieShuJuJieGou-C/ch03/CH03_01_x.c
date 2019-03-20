#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char* ptr="Hello world!";
    char* char_ptr=(char*)malloc(sizeof(char)*strlen(ptr));
   
    if(!char_ptr)
    {
	exit(3);
    }


    free(char_ptr);
    return 0;
}


