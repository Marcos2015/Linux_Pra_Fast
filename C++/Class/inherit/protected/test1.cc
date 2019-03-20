#include <iostream>
using namespace std;



class Base
{
	private:
		int Base_a;
	protected:
		int Base_b;
	public:
		int Base_c;

		void Base_set(int a,int b,int c)
		{
			Base_a=a;
			Base_b=b;
			Base_c=c;

				cout << "Base_a=" << Base_a << endl;
				cout << "Base_b=" << Base_b << endl;
				cout << "Base_c=" << Base_c << endl;


		}


int get_Base_a()
{
	return Base_a;
}

int get_Base_b()
{
	return Base_b;
}

int get_Base_c()
{
	return Base_c;
}

};









class child:protected Base
{
	private:
		int child_a;
	protected:
		int child_b;
			void get_child_fatrher()
			{
				get_Base_c();
			}





	public:
		int child_c;
			void child_set(int aa,int bb,int cc,int xx,int yy,int zz)
			{
				Base::Base_set(aa,bb,cc);
				child_a=xx;
				child_b=yy;
				child_c=zz;
			}



};





int main()
{
	child child1;
	child1.child_set(100,200,300,400,500,600);

	return 0;
}


