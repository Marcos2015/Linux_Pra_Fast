#include <iostream>
using namespace std;


class DEMO
{
	public:
		DEMO(void)
		{
			cout << "DEMO :: DEMO(void)" << endl;
		}


		DEMO(const DEMO& other)
		{
			cout << "DEMO:: DEMO(const DEMO&) " << endl;
		}

		~DEMO()
		{
			cout << this << " DEMO::DOME()" << endl;
		}


};



	DEMO fun(DEMO a)
	{
		return a;
	}


		DEMO fun_2(DEMO& a)
		{
			return a;
		}





int main()
{

	DEMO a;
	DEMO b(a);
			cout << "the line 1 " << endl;
		fun(b);
			cout << " the line b " << endl;
		fun(b);



return 0;
}



