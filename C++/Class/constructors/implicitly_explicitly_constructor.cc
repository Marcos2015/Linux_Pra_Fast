#include <iostream>
using namespace std;


class test
{
    private:
	int x;

    public:
	test(int h):x(h)
	{
		cout << "x=" << x << endl;
	}


};



int main()
{
	test test_1;
	test test_2=test();
return 0;
}




