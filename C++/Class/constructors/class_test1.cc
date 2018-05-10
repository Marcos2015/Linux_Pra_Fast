#include <stdio.h>

class X
{
	public:
		int i;
		int j;

	public:
		X(int val):j(val),i(j)
		{}

};



class Y
{
	public:
		int i;
		int j;
	public:
		Y(int val):j(val)
		{
			printf("j=%d\n",j);
			printf("i=%d\n",i);
			i=j;
			printf("i======%d\n",i);
		}

};



int main()
{
	X x(3);
	Y y(5);
		printf("x.i = %d x.j = %d \n",x.i,x.j);

		printf("y.i = %d y.j = %d \n",y.i,y.j);

return 0;
}



