#include <iostream>
#include <cstring>
using namespace std;


class boy;

class girl
{
	private:
		char* name;
		int age;
	public:
		girl(char* n,int a)
		{
			name=new char[strlen(n)+1];
			strcpy(name,n);
			age=a;
		}

		void prt(boy& b);
		void show()
		{
			cout <<"girl_name="<<name<<endl;
			cout <<"girl_age="<<age<<endl;
		}


};

// int girl::age=90;   非静态成员不可以在类外定义

class boy
{
	private:
		char* name;
		int age;
		friend class girl;
	public:
		boy(char* n,int b)
		{
			name=new char[strlen(n)+1];
			strcpy(name,n);
			age=b;
		}

		//friend void  girl::prt(boy& b);
		friend void visit(girl& j)
		{
			//cout << j.name << endl;
			//cout << j.age <<endl;
		}

};


		void girl::prt(boy& b)
		{
			cout <<"girl's name="<<name<<"girl's age="<<age<<endl;
			cout <<"boy's name="<<b.name<<"boy's age="<<b.age<<endl;
		}

int main()
{
	girl gl("Tracy",13);
	boy  bl("Tom",24);
//	gl.prt(bl);
//	bl.show();
	return 0;

}

