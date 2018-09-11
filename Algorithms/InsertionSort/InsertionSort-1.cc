#include <iostream>
using namespace std;

void InsertionSort(int r[],int n)
{
	int i,j ,s;
	
	for(int i=1;i<n;i++)
	{
		s=r[i];
		j=i-1;

		while(s<r[j])
		{
			r[j+1]=r[j];
			--j;
		}

		r[j+1]=s;
	}


	
}



int main()
{
	int fg[5]={34,10,89,40,4};

	InsertionSort(fg,5);


	for(int i=0;i<5;i++)
	{
		cout << fg[i] << "\t";
	}

	putchar(10);
return 0;
}


