#include <iostream>
using namespace std;



struct chaff
{
	char dross[20];
	int slag;
};




chaff *p=new chaff[2];









int main()
{

	chaff *p=new chaff[2];
		strcpy(p->dross,"hell");
		strcpy((p+1)->dross,"man");
		p->slag=10;
		(p+1)->slag=99;


			for(int i=0;i<2;i++)
			{
				cout << (p+i)->dross << endl;
				cout << (p+i)->slag << endl;

			}






	return 0;
}

