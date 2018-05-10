#include <iostream>
using namespace std;



class Date
{

private:
	int y,m,d;
	int month()
	{
		cout << "m=" << m << endl;
		return m;
	}




public:
	Date();
	~Date();
	Date(int t,char * hell);
	//Date();
	void test_private()
	{
		month();
	}



};


	Date::~Date()
	{
			cout << " delete Date!" << endl;
	}



	Date::Date(int t, char* hell)
	{
		m=t;
		cout << "string is = " << hell << endl;

	}

	Date::Date()
	{
		cout << " this is fault consuctors function !\n";
	}





class test_class
{
	private:
		int z;

	public:
		test_class();
		~test_class();
		void test_hello(int s,char* l);
};


	test_class::test_class()
	{
		cout << " test_class constructors " << endl;
	}


	test_class::~test_class()
	{
			cout << " delete   test_class " << endl;
	}

	void test_class::test_hello(int s, char* l)
	{
		z=s;
		cout << "this string l  is : " <<  l << endl;
	}















int main()
{
	
	
	Date Date2; //不能写成Date Date2();
	Date Date1=Date(100,"Helloworld");
	Date1.test_private();

	test_class class1;
	class1.test_hello(2,"kitty");

	
	return 0;
}




