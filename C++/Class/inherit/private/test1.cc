#include <iostream>
using namespace std;


class Base
{
	private:
		int a;
	protected:
		int b;
		int get_b()
		{
			return b;
		}
	public:
		int c;
		int get_a()
		{
			return a;
		}


			void Base_set(int xx,int yy,int zz)
			{
				this->a=xx;
				this->b=yy;
				this->c=zz;
			}





/*
		int get_b()
		{
			return b;
		}

*/
};



class child:private Base
{

	private:	
		int child_a;
	protected:
		int child_b;
		void child_get_father_b()
		{
//			cout << "a=" << a << endl;
			cout << "the father_a is= "<< get_a() << endl;
			cout << "the fateher_b is= " << get_b()<< endl;
		}


	public:
		int child_c;
		int get_child_a()
		{
			return child_a;
		}

		int get_child_b()
		{
			return child_b;
		}

		int get_child_c()
		{
			return child_c;
		}



		void child_set(int aa,int bb,int cc,int xx,int yy,int zz)
		{
			Base::Base_set(aa,bb,cc);
			child_a=xx;
			child_b=yy;
			child_c=zz;
		}



				void use()
				{
					child_get_father_b();
				}

};


int main()
{

	child child1;
	cout << child1.a << endl;
	child1.child_set(1,2,3,4,5,6);
		child1.use();
	return 0;
}




