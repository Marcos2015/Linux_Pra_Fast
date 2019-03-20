#include <iostream>
#include <vector>
using namespace std;




int main()
{
    vector<int>vect;//vect是一个对象而不是一个变量,那么在进行调用这个对象(vect)的时候,它必须是在函数里面,不能在函数外面调用对象vect.
    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(8);

    vect[2]=10;
	for(int i=0;i<vect.size();i++)
	{
		cout << vect[i] <<endl;
	}


	cout << endl;

	vect.at(2)=90;

	for(int i=0;i<vect.size();i++)
	{
		cout << vect.at(i) << endl;
	}

	cout << endl;

	vector<int>::iterator TL = vect.begin();

	*(TL+1)=78;

	while(TL!=vect.end())
	{
		cout << *TL << endl;
		TL++;
	}












return 0;
}

