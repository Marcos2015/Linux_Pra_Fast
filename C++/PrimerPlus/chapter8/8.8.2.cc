#include <iostream>
using namespace std;


struct CandyBar
{
	string hello;
	double weight;
	int hot;
};

void test(CandyBar & s,string  h, double b,int e)
{
		s.hello=h;
		s.weight=b;
		s.hot=e;

}


int main()
{
	struct CandyBar K;
	test( K, "Millennium Munch",2.85,350);	
	cout << K.hello << endl;
	cout << K.weight << endl;
	cout << K.hot << endl;
return 0;
}


