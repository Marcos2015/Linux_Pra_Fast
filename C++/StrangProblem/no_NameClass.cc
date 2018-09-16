#include <iostream>
using namespace std;

class Y
{
    private:
	int jk;
	double i;
    public:
	int get_jk()
	{
		return jk;
	}

	Y(int a)
	{
		jk=a;
	}

	Y(Y& q)
	{
		q.jk=jk;
	}


}J(4);


int main()
{
	//Y H(J);
	cout << J.get_jk() << endl;//只要前面加上Y H(J)这行代码,那么J.get_jk()就会出现随机数,不加就没问题
	//cout << H.get_jk() << endl;
	return 0;
}


