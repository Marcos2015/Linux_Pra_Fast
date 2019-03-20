#include <iostream>
using namespace std;

namespace Jack{
	int h;
}



namespace Jill{
	int h;
	void fetch();
}





namespace Jill{
	void fetch()
	{
		cout << " hello world " << endl;
	}
}

using Jill:: h;






int  main()
{

	using Jack :: h;
//	using Jill :: h;
/*
	using Jill :: fetch;//声明使用该函数名的时候不需要加()符号，仅仅是声明在这里使用而已.
	fetch();//已经在上面使用了using Jill:: fetch,所以不需要::声明其区域了.
*/

	Jill::fetch();// 由于没有使用using Jill::fetch,故需要每次都需要声明fetch的区域:Jill::fetch().

	return 0;

}

