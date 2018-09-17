#include <iostream>
#include <deque>
using namespace std;


int main()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(99);
	d.push_back(100);

	cout <<"原始的双端队列"<<endl;

	for(int i=0;i<d.size();i++)
	{
		cout << d.at(i) << "\t";
	}

	cout << endl;




	d.push_front(50);
	d.push_front(78);
	d.push_front(34);
	d.push_front(7);

	
	for(int i=0;i<d.size();i++)
	{
		cout << d.at(i) << "\t";
	}

	cout << endl;


	d.pop_front();
	d.pop_front();



	for(int i=0;i<d.size();i++)
	{
		cout << d.at(i) << "\t";
	}
    cout << endl;
    d.pop_back();
    d.pop_back();


    
	for(int i=0;i<d.size();i++)
	{
		cout << d.at(i) << "\t";
	}
	putchar(10);

return 0;
}


