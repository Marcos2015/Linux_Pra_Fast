#include <iostream>
#include <string.h>
using namespace std;

class boy;

class girl
{
	char* name;
	int age;

	public:
		girl(char *n,int a)
		{
			name = new char[strlen(n)+1];
			strcpy(name,n);
			age=a;
		}

		void ptr(boy &b);
		~girl()
		{
			delete name;
		}
};



class boy
{
	private:
	char* name;
	int age;
public:
	boy(char* n,int a)
	{
		name=new char[strlen(n)+1];
		strcpy(name,n);
		age=a;
	}

	friend void girl::ptr(boy& b);
	~boy()
	{
		delete name;
	}

};

void girl::ptr(boy & b)
{
	cout << "girl\'s name:" << name << "  age:" << age << "\n";
	cout << "boy \'s name:" << b.name << " age:" << b.age << "\n";
}



int main()
{
	girl g1("Stacy",15);
	boy b1("Jim",16);
	g1.ptr(b1);

return 0;
}



		
