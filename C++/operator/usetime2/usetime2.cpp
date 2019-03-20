#include <iostream>
#include "mytime2.h"


int main()
{
/*
	using std::cout;
	using std::endl;
*/

	using namespace std;

	Time planing;
	Time coding(20,40);
	Time fixing(5,44);
	Time total;

		cout << "planing time"<<endl;
		planing.Show();
		cout<<endl;


		cout << "coding time"<<endl;
		coding.Show();
		cout << endl;


	//	std::cout << "fixing time=" << fixing.Show() << std::endl;//Show()返回值是void,无法用cout打印出来
		cout << "fixing time=";
		fixing.Show();
		cout << endl;

		total=coding.operator+(fixing);
		cout << "coding+fixing"<<endl;
		total.Show();
		cout << endl;

		total=coding+fixing;
		cout << "coding+fixing"<<endl;
		total.Show();
		cout << endl;


			total=coding.operator-(fixing);
			cout << "coding-fixing" << endl;
			total.Show();
			cout << endl;


			total=coding.operator*(5);
			cout << "coding*5" << endl;
			total.Show();
			cout << endl;




return 0;
}


