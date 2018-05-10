#include <iostream>
using namespace std;


inline int const& max(int const& a,int const& b)
{
	return a<b ? b:a;
}


template <class T>
inline T const& max(T const& a,T const& b)
{
	return a<b ? b:a;
}


template<class T>
inline T const& max(T const& a,T const& b,T const& c)
{
	return ::max(::max(a,b),c);
}


int main()
{
	::max<double>(7,42);
return 0;
}



