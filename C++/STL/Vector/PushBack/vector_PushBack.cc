#include <iostream>
#include <vector>
using namespace std;

int main(int argc ,char** argv)
{
	vector<int>int_vect;
	int_vect.push_back(1);
	int_vect.push_back(2);

	int nSize=int_vect.size();

	for(int i=0;i<nSize;i++)
	{
		cout << int_vect[i] << endl;
	}


	
	int vect;	
	for(int i=0;i<nSize;i++)
	{
	    vect=int_vect.at(i);
	    cout << vect <<  endl;
	}


	
	vector<int>::iterator int_vector=int_vect.begin();	
	while(int_vector!=int_vect.end())
	{
		cout << *int_vector <<endl;
		int_vector++;
	}

	
	
	
	
return 0;
}



