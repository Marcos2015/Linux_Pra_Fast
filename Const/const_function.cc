#include <iostream>
using namespace std;


class temp
{
	private:
		int age;

	public:
		int getage()const;
		temp(int age);

};


	temp::temp(int age)
	{
		this -> age = age;
	}

	int temp::getage() const
	{
		//age += 10;
		return age;
	}



int main()
{
	temp temp1(20);
	cout << "temp1.getage()= " << temp1.getage() << endl;
	return 0;
}


