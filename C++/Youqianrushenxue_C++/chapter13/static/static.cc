#include <iostream>
using namespace std;


class Test
{
	private:
		int k;
	public:
		static int n;
		Test(int x)
		{
			k=x;
			n++;
		}
		void disp()
		{
			cout <<"n="<<n<<"  "<<"k="<<k<<endl;
		}


};


int Test::n=0;


int main()
{
	Test t1(8);
	t1.disp();

	Test t2(90);
	t2.disp();

	Test::n++;
	t2.disp();

return 0;
}


