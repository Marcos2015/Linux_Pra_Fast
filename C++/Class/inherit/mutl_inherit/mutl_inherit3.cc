#include <iostream>
using namespace std;

class Base1
{
	private:
		int x1;
	public:
		Base1(int y1)
		{
			x1=y1;
			cout << "constructing Base1,x1=" << x1 << endl;
		}


		~Base1()
		{
			cout << "destructing Base1" << endl;
		}
};






class Base2
{
	int x2;
public:
	Base2(int y2)
	{
		x2=y2;
		cout << "constructing Base2" << endl;
	}

	~Base2()
	{
		cout << "destructing Base2" << endl;
	}

};



class Base3
{
	int x3;
	public:
		Base3()
		{
			cout << "constructing base3" << endl;
		}

		~Base3()
		{
			cout << "destructing Base3" << endl;
		}

};







class Derived:public Base1,public Base2,public Base3
{
	private:
		Base1 ob1;
		Base2 ob2;
		Base3 ob3;
	public:
		Derived(int x,int y,int z,int v):Base1(x),Base2(y),ob1(z),ob2(v)//对ob1,ob2两个对象进行初始化。
		{
			cout << "constructing Derived" << endl;
		}


		~Derived()
		{
			cout << "destructing Derived class " <<  endl;
		}

};





int main()
{
	Derived ob(1,2,3,4);
return 0;
}


