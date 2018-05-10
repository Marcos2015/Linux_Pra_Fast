#include <iostream>
using namespace std;

class C
{
	public:
		int& getRefN()
		{
			return n;
		}

		int getN()
		{
			return n;
		}

	    private:
		int n;
}c;



int main()
{
	int& k=c.getRefN();
	k=7;
	
	c.getRefN()=9;
	cout << c.getN() << endl;
return 0;
}



