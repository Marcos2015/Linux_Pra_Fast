#include <iostream>
using namespace std;


class Target
{
	public:
		virtual void Request(){};
};

class Adaptee
{
public:
	void SpecicalRequest()
	{
		cout << "Call SpecicalRequest()" << endl;
	}
};


class Adapter:public Adaptee,public Target
{
	public:
		void Request()
		{
			this->SpecicalRequest();
		}
};




int main()
{
	Target *t = new Adapter();
	t->Request();
return 0;
}



