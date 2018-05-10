#include <iostream>
using namespace std;

class Base{
	private:
		int a;
	protected:
		int b;

		void Base_set(int x,int y,int z)
		{
			this->a=x;
			this->b=y;
			this->c=z;
		}
	public:
		int c;

	int get_a()
	{
		return  a;
	}

	int get_b()
	{
		return b;
	}

	int get_c()
	{
		return c;
	}

};








class child:public Base
{

	private: 
		int child_a;
		void protected_child_show()
		{

			Base::Base_set(1981,1982,1983);
				cout << "Base_a="<< get_a() << endl;
				cout << "Base_b="<< b << endl;
				cout << "Base_c="<< c << endl;
		}
	protected:
	/*
		void protected_child_show()
		{

			Base::Base_set(1981,1982,1983);
				cout << "Base_a="<< get_a() << endl;
				cout << "Base_b="<< b << endl;
				cout << "Base_c="<< c << endl;
		}
*/
		int child_b;

	public:
		int child_c;

		void child_set(int aa,int bb,int cc,int xx,int yy,int zz)
		{
			Base::Base_set(aa,bb,cc);
			this->child_a=xx;
			this->child_b=yy;
			this->child_c=zz;
		}
		void show()
		{
			protected_child_show();
			cout << "Base_a="<< get_a()<< endl;
			cout << "Base_b="<< b<< endl;
			cout << "Base_c=" << c << endl;
		}


			void show_again()
			{
					protected_child_show();
			}

};



int main()
{
	child BB;
//	BB.child_set(900,800,300,400,500,600); /*protected way init*/
//	BB.Base_set(100,200,300);      /*public way init*/
	BB.show_again();
return 0;
}




