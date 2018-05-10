#include <iostream>
#include <string>
using namespace std;
class boy;

class girl
{
	char* name;
	int age;

public:
	girl(char* n,int a)
	{
		name=new char[strlen(n)+1];
		strcpy(name,n);
		age=a;
	}
	void prt(boy &b);
	~girl()
	{
		delete name;
	}

};




class boy
{
	char* name;
	int age;
public:
	boy(char* n,int a)
	{
		name=new char[strlen(n)+1];
		strcpy(name,n);
		age=1;
	}
friend void girl::prt(boy &b);
	~boy()
	{
		delete name;
	}
};

void girl::prt(boy& b)
{
	cout << "girl\'s name :"<< name << "  age:" << age <<" \n";
	cout << "boy\'s name :" << b.name<<"  age:"<<b.age << "\n";
}







int main()
{
	girl g1("Stacy",15);
	boy b1("Jim",16);
	g1.prt(b1);
return 0;
}

















