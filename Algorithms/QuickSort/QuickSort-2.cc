#include <iostream>
using namespace std;


int Partition(int p[],int low,int high)
{
	int i,j,var;
	i=low,j=high,var=p[low];

    while(i<j)
    {
	while(i<j && p[j]>var) j--;
	if(i < j )
	{
		int temp=p[i];
		p[i]=p[j];
		p[j]=temp;
		i++;
	}

	while(i<j && p[i]<=var) i++;
	if(i < j )
	{
	    int temp=p[j];
	    p[j]=p[i];
	    p[i]=temp;
	    j--;
	}

    }

return i;
}



void QuickSort(int p[],int low,int high)
{
	int temp;
	if(low<high)
	{
	    temp=Partition(p,low,high);
	    QuickSort(p,low,temp-1);
	    QuickSort(p,temp+1,high);
	}

}


int main()
{

	int world[5]={90,72,13,10,16};
	for(int i=0;i<5;i++)
	{
		cout << world[i] <<"\t";
	}

	cout << endl << "\n";

	QuickSort(world,0,4);

	for(int i=0;i<5;i++)
	{
		cout << world[i] << endl;
	}

return 0;
}


