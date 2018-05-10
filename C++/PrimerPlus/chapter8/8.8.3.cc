#include <iostream>
#include <string>
#include <cstring>
using namespace std;


int main()
{
	int count = 0;
	string hh;
	while(1)
	{
		if( count == 0)
		{
			cout << "Enter a string ( q to quit )" << endl;
			getline(cin,hh);
			int i=0;
				if(hh[0] == 'q' && hh[i+1] == '\0') return 0;
			while( hh[i]  != '\0')
			{
				if(hh[i] >= 'A' && (hh[i] <= 'Z'))
				{	
					hh[i]=hh[i] + 32;
					cout << hh[i] << endl;
				}else if( hh[i] >= 'a' && hh[i] <= 'z' )
					{
						hh[i]=hh[i] - 32;
						cout << hh[i] << endl;
					}
				i++;
			}

		}else{
			cout << "Next  string ( q to quit ) " << endl;
			getline(cin,hh) ;
			int i=0;
				if(hh[0] == 'q' && hh[i+1] == '\0') return 0;
			while( hh[i]  != '\0')
			{
				if(hh[i] >= 'A' && (hh[i] <= 'Z'))
				{	
					hh[i]=hh[i] + 32;
					cout << hh[i] <<"  ";
				}else if( hh[i] >= 'a' && hh[i] <= 'z' )
					{
						hh[i]=hh[i] - 32;
						cout << hh[i] <<"  ";
					}
				i++;
			}
		}
		count++;
	}


return 0;
}


