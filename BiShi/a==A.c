#include <stdio.h>


if('A' == a )
{
	a++;
}

if( a == 'A' )
{
	a++;
}

//第一种写法好，常量写在前面，如果不小心将 == 写成 = ；
//那么就可以在编译阶段直接发现错误，而不是等到运行阶段才发现。



第一种写法：

for( int i = 0; i < 8 ; i++ )
{
	X = i + Y + J*7;
	printf("%d\n",X );
}



第二种写法：

S = Y + J*7;
for( i = 0; i < 8 ; i++ )
{
	printf("%d", i + S );
}


//  第二种写法更好，减少乘法运算的次数
//
