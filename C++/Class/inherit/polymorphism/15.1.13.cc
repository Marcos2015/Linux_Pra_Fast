#include <iostream>
using namespace std;

class Animal
{
	public:
		void sleep()
		{
			cout << "the animal sleep" << endl;
		}

		void breathe()
		{
			cout << "the animal breathe" << endl;
		}


};







class Fish:public Animal
{
	public:
		void breathe()
		{
			cout << " Fish breathe " << endl;
		}

		void sleep()
		{
			cout << "Fish sleep " << endl;
		}


};


int main()
{
/*
	Animal h;
	Fish* k=&h;
*/
	Fish f;
	Animal* h=&f;
	h->sleep();
return 0;
}


