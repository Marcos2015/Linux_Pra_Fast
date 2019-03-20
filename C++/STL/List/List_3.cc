#include <iostream>
#include <list>
using namespace std;


int main()
{
	list<int>test;

	test.push_back(1);
	test.push_back(2);
	test.push_back(3);
	test.push_back(4);
	test.push_back(5);
	test.push_back(6);
	test.push_back(7);



	list<int>hello;
	hello.push_back(8);
	hello.push_back(9);
	hello.push_back(10);
	hello.push_back(11);
	hello.push_back(12);
	hello.push_back(13);
	hello.push_back(14);
	hello.push_back(15);
	hello.push_back(16);
	hello.push_back(17);


	test.splice(test.begin(),hello);//hello的所有元素移动到test.begin()迭代器前.
	//splice把hello原封不动的移动到test.begin()这个迭代器位置前面.
	//merge把hello原封不动的移动到test.end()这个迭代器后面.
	//test.merge(hello);

	for(list<int>::iterator TL=test.begin();TL!=test.end();TL++)
	{
		cout << *TL << "\t";
	}
	cout << endl;

	cout << test.size() << "\t" << hello.size() << endl;
	


	//cout << test.unique() << endl;
	



	putchar(10);

return 0;
}


