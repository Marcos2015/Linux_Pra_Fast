#include <iostream>
using namespace std;


class classf
{
public:
	classf(){}

		double operator()(double x)
		{
			return 2*x;
		}

};


double sum2(classf f,int n,int m)
{
	double result = 0;
	for(int i=n;i<=m;i++)
	{
		result += f(i);
	}

return result;
}


int main()
{
	classf cf;
	//cout << sum2(cf,2,5) << endl;
	cout << sum2(classf(),2,5)<< endl ;

return 0;
}


