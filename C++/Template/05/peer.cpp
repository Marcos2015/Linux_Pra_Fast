#include <iostream>
using namespace std;


template <class T>
//T const& max(T const& a,T const& b)
////当参数为引用的时候,如果输入实参为字符串,那么会演绎为字符串数组,这样"Apple"就是char[6],而"Peer"则是char[5],由于形参为引用,字符串数组不会转化为指针,T不可能既是char[6]又是char[5],又无法转换为指针,所以编译的时候就报错.

//解决办法:
//1.
//字符串是字符数组,系统在解析字符串的时候会先把字符串转化为字符数组,这样进行编译就不会出现类型不一致的bug,那么我们可以使用const char*强转,这样字符串就会从字符数组转化为一个指针,就不会bug了.
//
//2.
//第二个办法就是把两个字符串都定义为string类型.
//
T const& max(T const a,T const b)
{
}


int main()
{
	::max("Peer","Apple");
	::max((const char*)"Peer",(const char*)"Apple");
	std::string s="Peer";
	std::string t="Apple";
	::max(s,t);
return 0;
}



