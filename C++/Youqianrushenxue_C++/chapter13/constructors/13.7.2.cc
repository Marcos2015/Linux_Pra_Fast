#include <iostream>
using namespace std;

class dot
{
	private:
		int x,y;

	public:
		dot(int a,int b)
		{
			x=a;
			y=b;
		}

		dot(dot & T)
		{
			x=T.x+10;
			y=T.y+20;
			cout << "调用拷贝构造函数"<<endl;
		}


		int get_x()
		{
			return x;
		}

		int get_y()
		{
			return y;
		}

};


void f(dot p)
{
	cout << p.get_x() <<"  "<< p.get_y() << endl;
}



dot g()
{
	dot q(3,5);
	return q;
}



int main()
{
	dot dot1(2,4);
	dot dot2(dot1); //第一次显示"调用拷贝构造函数" 
	    cout << dot2.get_x() <<" "<<dot2.get_y()<<endl; //显示:12,24
	f(dot2);//dot2 这个地方会调用一次拷贝构造函数,会显示:调用拷贝构造函数",然后随机会显示:22,44
	dot2=g();
	cout << dot2.get_x() << "  " << dot2.get_y() << endl;	//显示:13,25(10+3,20+5: x=T.x+10,y=T.y+20  拷贝构造函数函数体这样定义的);
return 0;
}

//编译命令: g++ -fno-elide-constuctors 13.7.2.cc //-fno-elide-constructors
//这三个参数项必须连在一起,不可有空格,如果不添加这个编译选项,则编译器会自动优化,得出结果为:3,5.
