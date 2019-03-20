#include <iostream>
using namespace std;


class Target
{
    public:
	virtual void Request(){};
};

class Adatee
{
    public:
	void SpecicalRequest()
	{
		cout << " SpeciaclRequest()" << endl;
	}


};


class Adatera:public Target
{
	private:
		Adatee* Adatess;
	public:
		Adatera()
		{
		    Adatess  =  new Adatee();
		};

		void Request()
		{
			Adatess->SpecicalRequest();
		}

};

int main()
{
	Target* As=new Adatera();
	As->Request();
return 0;
}




