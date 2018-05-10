#include <iostream>
using namespace std;

class list
{
	public:
		int num;
		int score;
		char name[10];
		class list* next;
};

typedef class list node;
typedef node* link;


int main()
{
	link newnode ,ptr,delptr;
	cout << "pleaase input 5 students scores: " <<  endl;
	delptr=new node;
	if( !delptr )
	{
		cout << "Error for memory ! " << endl;
		exit(1);
	}

	cout << " please input num: " << endl;
	cin >> delptr -> num ;
	cout << " please input name: " << endl;
	cin >> delptr -> name ;
	cout << " please input score: " << endl;
	cin >> delptr -> score ;

	ptr = delptr;
	for( int i=1;i<5;i++ )
	{
		newnode =new node;
		if( !newnode )
		{
			cout << " Error for memory ! " << endl;
			exit(1);
		}

		cout << " please input you num: " << endl;
		cin >> newnode -> num;
		cout << "please input you name: " << endl;
		cin >> newnode -> name ;
		cout << "please input  you score: " << endl;
		cin >> newnode -> score ;

		newnode -> next = NULL;
		ptr -> next = newnode;
		ptr = ptr -> next;
	}


	 cout << "\nstudent's score " << endl;
	 cout << "num\t           name \t           score \n====================================" << endl;
	 ptr = delptr;
	 while( ptr != NULL )
	 {
		 cout << ptr -> name << "\t" << ptr -> name << "\t" << ptr -> score << endl;
		 delptr = ptr ;
		 ptr = ptr -> next;
		 delete delptr;
	 }

}


