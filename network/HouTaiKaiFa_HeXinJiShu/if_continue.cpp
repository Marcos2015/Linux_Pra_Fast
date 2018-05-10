#include <iostream>
#include <stdio.h>
using namespace std;


int main()
{
    int n=0;
  
    /*
    for(n=0;n<10;printf("%d\n",n))
    {

	if(n%3==0)continue;
	n++;
	
    }
    */


    while(n<7)
    {
	n++;
	if(n%3==0)continue;
	printf("%d\n",n);
    }
return 0;
}


