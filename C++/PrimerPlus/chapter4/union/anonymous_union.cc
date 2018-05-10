#include <iostream>

struct widget
{
	int file;
	char name[20];
	union
	{
	    long num_id;
	    char id_char[20];
	};
};



int main(void)
{
    using namespace std;
    struct widget perks;
    if( perks.file == 0 ) //not decleare for perks.file 
    {
	  cout << "input  num_id: " << endl;
	  cin >> perks.num_id;
	  cout << perks.num_id << endl;
    }
    else if( perks.file == 1 )
    {
	cout << "input id_char: " << endl;
	cin >> perks.id_char;
	cout << perks.id_char << endl;
    }

    return 0;
}

