#include <iostream>
using namespace std;


class T
{
	private:
		int x,y;
	public:
		T(int a,int b)
		{
			x=a;
			y=b;
		}

		void showT()
		{
			cout <<"x="<<x<<"  "<<"y="<<y<<endl;
		}

};



int main()
{
	T k(3,9);
	k.showT();


	T PL(k); //使用系统默认的构造函数,以k的构造函数为标准构造PL.
	PL.showT();
return 0;
}


