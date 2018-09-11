#include <iostream>
using namespace std;

class dot
{
	private:
		int x,y;
		static int t;
		static void show_t()
		{
			//cout << "x=" << x <<endl;
			//cout << "y=" << y <<endl;
			//静态函数不能调用非静态成员
			cout << "私有静态函数:t="<< t  << endl;
		}



	public:
		dot(int a,int b)
		{
			x=a;
			b=y;
			t++;
		}

		int get_x()
		{
			return x;
		}
		int get_y()
		{
			return y;
		}



		static void get_t()
		{
			cout << "t=" << t << endl;
		}

		void test_static()
		{
			show_t();
		}


		dot(dot& T)
		{
		    x=T.x;
		    y=T.y;
		    t++;
		}


};

int dot::t=0;//如果没有将静态数据成员初始化,直接编译错误.


int main()
{
	dot::get_t();
	dot dot_1(4,6);
	cout <<dot_1.get_x()<<endl;
	cout <<dot_1.get_y()<<endl;
	dot::get_t();
	//dot::show_t();
	////私有的静态成员函数只能通过对象调用,无法通过类直接调用
	//由于只能通过成员函数调用私有函数,所以不能直接透过"对象.私有函数"
	//的方式去调动
	dot_1.test_static(); //通过成员函数调用私有函数方式完成调用

	dot dot_2(dot_1);
	cout <<dot_2.get_x()<<endl;
	cout <<dot_2.get_y()<<endl;
	dot::get_t();
	dot_2.get_t();
return 0;
}





