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
	Y H(J);
	cout << J.get_jk() << endl;
	//cout << H.get_jk() << endl;
	return 0;
}


