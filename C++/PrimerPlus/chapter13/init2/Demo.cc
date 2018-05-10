#include <iostream>
using  namespace std;

class DEMO
{
	private:
		int n;
	public:
		DEMO(int n):n(n)
		{
			cout << this << " call DEMO() n=" << n << endl;
		}

		void show()
		{
			cout << this << " n=" << n << endl;
		}

};




int main()
{
	DEMO a(100);
	DEMO b(a);
	b.show();
return 0;
}


