#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* p=(char*)malloc(sizeof(int));
    free (p);
    return 0;
}

