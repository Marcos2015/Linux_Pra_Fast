#include <iostream>
using namespace std;

void show(int& n);
void when_work(void(*call_back)(int&),int& n,int s);


int main()
{

	int n=0;
	int s=1;

	when_work(show,n,s);


	return 0;
}








void show(int& n) //如果所传的参数不是引用，那么在函数结束时，所传的参数也将被销毁。n也无法进行计数，结果永远是"第一次"。
{
	cout << "第" << ++n << "次" << endl;
}


void when_work(void(*call_back)(int&),int& n,int s)
{
	cout << "============回调========" << endl;
	while(1)
	{
		call_back(n);
		sleep(s);
	}
}






