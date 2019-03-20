#include <iostream>
#include <cstring>
#include <string>

template <class T>
inline T const& max(T const& a,T const& b)
{
	return a<b ? b:a;
}

/*
template <class T>
inline T* const& max(T* const& a,T* const& b)
{
	return *a < *b ? b:a;
}


inline char const* const& max(char const* const& a,char const* const& b)
{
	return std::strcmp(a,b) < 0 ? b:a;
}
*/

int main()
{
	int a=7;
	int b=42;
	std::cout << ::max(a,b) << std::endl;


	std::string s="hry";
	std::string t="Hello";
	std::cout << ::max(s,t) << std::endl;

	int* p1=&b;
	int* p2=&a;
	std::cout << ::max(p1,p2) << std::endl;

	char const* s1="David";
	char const* s2="Nicos";
	std::cout << :: max(s1,s2) << std::endl;



return 0;
}




