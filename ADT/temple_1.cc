#include <iostream>
using namespace std;
template <class T>


T& mess(int i, T&z)
{

	z=z+10;
return z;
}



int main()
{
	int s=100;
	int &d = s;
//	mess(10, d);
	cout << "z=" << mess(10,d) << endl;
return 0;

}



