template <class T1,class T2,class RT>

inline RT max(T1 const& a,T2 const& b)
{
	return a < b ? b:a;
}


