#include <iostream>
#include <deque>
using namespace std;
template <class T>

class Mydeque
{
	private:
	deque<T>mydeque;
	
	public:
	void push(const T& t)
	{
		mydeque.push_back(t);
	}

	void pop()
	{
		mydeque.pop_front();
	}


	int size()
	{
		return 	mydeque.size();
	}

	bool empty()
	{
		return mydeque.empty();
	}

	T& front()
	{
		return *mydeque.begin();
	}


	T& back()
	{
		return *--(mydeque.end());
	}



	void display()
	{
		for(int i=0;i<mydeque.size();i++)
		cout<<mydeque.at(i)<<endl;
	}

};




int main()
{
	Mydeque<int> test;
	test.push(10);
	test.push(34);
	test.push(8);

	test.pop();
	test.display();


	test.push(1000);
	test.display();

	 test.front();
	 test.back();


return 0;
}


