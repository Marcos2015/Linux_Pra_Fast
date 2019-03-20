#include <iostream>
using namespace std;

int main()
{
	int num;
	int* p;
	p=&num;
	    num=0;

	    *(char*)p=0xff;

	    if(num==0xff)// 把数值0xff赋值给num,判断该赋值赋给了高位还是低位.
	    {
		    cout << "little" << endl;
	    }
	    else
	    {
		    cout << "big" << endl;
	    }

return 0;
}


		
