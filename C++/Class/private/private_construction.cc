#include <iostream>
using namespace std;


class Test_construct
{
	private:
		Test_construct();
		static Test_construct* gpg;

	public:
		
		static int k;
		static Test_construct* single()
		{
			if(!gpg)
			{
			    gpg=new Test_construct();
			}

			return gpg;
		}






};

int k=100;
Test_construct* Test_construct::gpg=NULL;
void sofun()
{

	Test_construct::single();
};



int main()
{
	Test_construct* T=Test_construct::single();
	cout << Test_construct::k << endl;
	return 0;
}


