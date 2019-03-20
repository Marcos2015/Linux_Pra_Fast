#include <iostream>
using namespace std;


class A
{
	private:
		int h;

	public:
		A()=default;
		A(int k):h(k)
		{
			cout << "h=" << h << endl;
		}


		int get_h()
		{
			return h+1;
		}


};



int main()
{
	A test(10);
	cout << test.get_h() << endl;

return 0;
}



