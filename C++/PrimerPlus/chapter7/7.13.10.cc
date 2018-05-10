#include <iostream>
using namespace std;

/*
const double calculate(double a,double b,const double(*p)(const double x,const double y));
const double add(double x,double y);
const double  reduction(const double x,const double y);
*/

const double add(double x, double y)
{
	return x+y;
}

const double reduction(double x,double y)
{
		return x-y;

}



const double calculate(double a,double b,const double (*p)(const double x,const double y))
{
	return (*p)(a,b);
}




int main()
{
	double x,y,num;
	char symbol;
	cout << "this is a calculator! " << endl << "(for example: 1+2)" << endl;
	
	while(cin >> x >> symbol >> y)
		{
			if(x < 0 || y < 0 || (symbol != '+' && symbol != '-'))
			{
				cout << "Done ! " << endl;
				break;
			}


			switch(symbol)
			{
				case'-':
				num = calculate(x,y,reduction);
				cout << "num = " << num << endl;
				break;
				case '+':
				num = calculate(x,y,add);
				cout << "num = " << num << endl;
				break;
				default:
					break;
			}
		}
		cin.get();
		cin.get();
		return 0;
}




