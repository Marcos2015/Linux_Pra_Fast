#include <iostream>
#include <vector>
using namespace std;


int main()
{
	vector<int>vect;

	for(int i=1;i<=10;i++)
	{
		vect.push_back(i);
		//cout << vect[i] << endl;
	}

	cout << "删除第五个元素后的vector" << endl;

	vect.erase(vect.begin()+4);

	for(int i=0;i<vect.size();i++)
	{
		cout << vect[i] << "\t";

	}
	putchar(10);




	vect.erase(vect.begin()+1,vect.begin()+4);

	cout <<"删除第二至第五个元素后的vector" << endl;

	for(int i=0;i<vect.size();i++)
	{
		cout << vect[i] << "\t";
	}
	    cout << endl;

	vector<int>::iterator TL=vect.begin();
	while(TL!= vect.end())
	{
		cout << *TL << "\t";
		TL++;
	}
    
	putchar(10);





return 0;
}


