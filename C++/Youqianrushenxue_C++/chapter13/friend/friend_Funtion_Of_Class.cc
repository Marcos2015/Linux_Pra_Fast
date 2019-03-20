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

		void prt(boy& b); //不能在这里实现Prt函数,因为boy类还没给出实现,会导致prt里面的b不能构造完成,只能放在boy类实现后面才可以.

};


class boy
{
	private:
		char* name;
		int age;
	public:
		boy(char* n,int b)
		{
			name=new char[strlen(n)+1];
			strcpy(name,n);
			age=b;
		}

		friend void  girl::prt(boy& b);   //友元函数
};


		void girl::prt(boy& b)
		{
			cout <<"girl's name="<<name<<endl;
			cout <<"boy's name="<<b.name<<endl;
		}

int main()
{
	girl gl("Tracy",8);
	boy  bl("Tom",3);
	gl.prt(bl);
return 0;
}

