#include <iostream>
#include <string>
using namespace std;

class boy;
class girl
{
	char* name;
	int age;
public:
	girl(char *n,int a)
	{
		name=new char[strlen(n+1)];
		strcpy(name,n);
		age=1;
	}

	void prt(boy& b);
	~girl()
	{
		delete name;
	}
};


class boy
{
public:
	char* name;
	int age;
	friend class girl;

	boy(char* n,int a)
	{
		name=new char[strlen(n+1)];
		strcpy(name,n);
		age=a;
	}

	~boy()
	{
		delete name;
	}

};




void girl::prt(boy& b)
{
	cout << "girl' name is:"<< name << endl;
	cout << "b.girl' name is:"<< b.name << endl;
}





int main()
{
	girl g1("Strcy",15);
	boy  b1("Jim",16);
	g1.prt(b1);

return 0;
}




