#include <iostream>
using namespace std;


class Test_construct
{
	private:
		Test_construct(){};
		static Test_construct* gpg;

	public:
		static Test_construct* single()
		{
			if(!gpg)
			{
			    gpg=new Test_construct();
			}

			return gpg;
		}






};

Test_construct* Test_construct::gpg=NULL;



int main()
{
	
	Test_construct::single();
	return 0;
}


