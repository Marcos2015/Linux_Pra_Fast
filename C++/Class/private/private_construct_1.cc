#include <iostream>
using namespace std;


class A
{
	private:
		int b;
		A();
		A(A & other);
		int get_b();



	public:
		static A* fun(A* a,A& k);
		A(int test);
		int j( A& jk);
		static A* fun(A* a);

};

A::A(){}

A::A(A& other)
{
	cout << other.b << endl;
}

int A::get_b()
{
	return b;
};


A::A(int test):b(test)
{
	cout << "public A()" << endl;
	cout << "b="<< b << endl;
}

int A::j(A& jk)
{
	cout <<"jk.b=" <<  jk.b << endl;
	return jk.b;
}




A* A::fun(A* a,A& k)
{
    A* f=new A;
    a->get_b();
    //cout << "b==" << b << endl; //静态函数不能访问非静态数据成员.
    cout << a->b << endl;
    cout << "k.b="<< k.b << endl; //由于静态函数也是成员函数,所以可以访问私有成员,,虽然看起来k.b是外部访问,但由于静态函数属于成员函数,所以可以访问.
    // get_b();//不能访问非静态函数,除非用这种方式:对象.get_b()或:对象指针->get_b();
    return f;
};


int main()
{
	    
	    A test_S(100);
	    A test_K(200);
	    A* test_S_point=&test_S;
	    A::fun(test_S_point,test_K);
//	    A test_F(test_S); //构造函数为私有,即不可实例化对象.
	    A test_F(89);
	    test_F.j(test_S);
return 0;
}


