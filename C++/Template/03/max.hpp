template <class RT,class T1,class T2>

inline RT max(T1 const& a,T2 const& b)
{
	return a < b ? b:a;
}


