#include <iostream>
using namespace std;

class Base
{
	public:
		virtual void show_name()
		{
			cout << "this is Base virtual_show_name() " << endl;
		}

		virtual void show_all()
		{
			cout << "this is Base show_all()"<< endl;
		}

};



class child:public Base
{
	public:
	/*
		virtual void show_name()
		{
			cout << "this is child_show_name()"<< endl;
		}
	*/


	virtual void show_all()
	{
		cout << " this is child_show_all"<< endl;
	}



		void use_virtual()
		{
				show_all();
		}



};



int main()
{
	child child1;
/*
	Base* b=&child1;
	b->show_name();   //方法一：通过指针调用虚函数
*/

//		child1.use_virtual();   //方法二：通过成员函数调用虚函数
	

/*方法三：通过引用调用虚函数，引用声明时即需要初始化*/	
/*
child &d=child1;
d.show_all();
*/

	child1.show_all();//若用对象名调用虚函数，则采用静态联编


return 0;
}


