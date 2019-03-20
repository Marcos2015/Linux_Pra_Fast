#include <iostream>
using namespace std;


class A
{
    public:
	    A()=default;
	    A(const A&a):str(a.str)
	    {
		    cout << "copy" << endl;
	    }

	    A(const string & d):str(d)
	    {
		    cout << "str" << endl;
	    }

	    string str;
};

void fun(A a)
{
	cout << "a.str=" << a.str << endl;
}




int main()
{
    fun(string("hello world"));

return 0;
}

//第一次出现打印的情况:调用构造函数
//
//当string("hello
//world")时,字符串作为实参会自动转化为一个A类型对象.
//此时,会调用A(const string &d):str(d){ cout << "str" <<
//endl;}这个构造函数,打印"str".
//
//
//第二次出现打印的情况:调用拷贝构造函数.
//
//然后,由于string("hello world")作为一个对象类型的实参,而fun(A
//a)的实参是A类型,而不是A&类型,所以会调用拷贝构造函数A(const A&a ):str(a.str){ cout << "copy" << endl;}
//打印出"copy" , 把string("hello world")拷贝到fun(A a)中的a.
//
//
//
//
//第三次出现打印的情况:
//
//最后,在fun(A a)函数中,会打印a.str,此时会打印实参的str,即"hello world".


//如果想让结果出现第二次调用拷贝构造函数显示"copy",那么就必须在编译时加上选项:-fno-elide-constructors : g++ -fno-elide-constructors
//explicit-fno-elide-constructors.cc 
//,否则,运行结果就不会出现"copy",编译器会自动优化,不会调用拷贝构造函数.

