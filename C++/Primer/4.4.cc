#include <iostream>

int main()
{
	using namespace std;
	const int Arsize = 20;
	char name[ Arsize ];
	char desert[ Arsize ];


	cout << "Enter your name :\n";
	    cin.getline( name , 10 );
	cout << "Enter your favourt desert: \n";
	    cin.getline( desert , 10 );
	cout << "I have some delicious: " << desert << endl;

return 0;
}




