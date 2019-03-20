#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
	list<string>test;
	test.push_back("a");
	test.push_front("b");
	test.push_front("c");
	test.push_front("k");
	test.push_front("w");
	cout <<*(test.rbegin())<<endl;  //逆迭代器,a被放入最下面,即最后面,得出a这个结果.

	test.pop_front(); //把w删除掉了,w在最上面.
	test.pop_back();//把a删除掉了,a在最下面

	cout << test.front()<<endl;
	cout << test.front()<<endl;


return 0;
}





