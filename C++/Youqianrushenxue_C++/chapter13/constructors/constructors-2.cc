#include <iostream>
using namespace std;

class Example
{
	private:
		int test;
	public:
		Example()
		{
			cout <<"constructors"<<endl;
		}

		Example(int _test)
		{
		    test=_test;
		    cout <<"constructors....."<<endl;
		}

		Example(const Example &exa) //必须const,否则错误
		{
			cout <<"copy construct"<<endl;
		}


		Example fun(Example ex)
		{
			return ex;
		}

		int get_test()
		{
			return test;
		}
};


int main()
{
	Example a(9);
	cout << a.get_test()<<endl;
//	Example b=a.fun(a);// 这里的=号是初始化, 如果有复制构造函数就会调用, 否则会使用memery copy.
	Example b;
	b=a.fun(a); //因为b这个对象已经存在了, 那肯定是不会调用复制构造函数了, 因为对象box已经早就构造好了.
//这里的等号实际上是 = 运算符重载了, 即赋值运算符重载.

	cout << "b.test="<<b.get_test()<<endl;
return 0;
}


