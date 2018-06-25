#include <iostream>


class test1
{
public:
	test1(int n)
	{
		num = n;
	}

private:
	int num;
};





class  test2
{
public:
	test2(int n)
	{
		num = n;
	}

private:
	int num;
};



int main()
{
	test1 t1=12;
//	test2 t2=12;
	test2 t3(13);
return 0;
}



