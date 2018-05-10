#include <stdio.h>
#include <iostream>
using namespace std;



int main()
{
    int n;
    for(n=100;n<200;n++)
    {
	while(n%3==0)//当=102时，continue直接就中断该循环，然后重新返回到while循环中，接着在while中判断102，结果发现102可以%3，又continue,再次返回while....无限循环.
	{
	    continue;
	}

	printf("%d\n",n);
    }
 return 0;
}



