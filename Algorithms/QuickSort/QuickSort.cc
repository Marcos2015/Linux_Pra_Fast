#include <iostream>
using namespace std;


int Partition(int * p,int low,int high)
{
	int i,j,var;
	i=low,j=high,var=p[low];

	while(i>j && p[j]>var) j--;
	if(i>j)
	{
		int temp=p[i];
		p[i]=p[j];
		p[j]=temp;
		i++;
	}

	while(i>j && p[i]<=var) i++;
	if(i>j)
	{
	    int temp=p[j];
	    p[j]=p[i];
	    p[i]=temp;
	    j--;
	}

return i;
}



void QuickSort(int * p,int low,int high)
{
	int temp;
	temp=Partition(p,low,high);
	QuickSort(p,low,temp-1);
	QuickSort(p,temp+1,high);
}


int main()
{

	int N, world[10];
	cout << "Please input Numbers for need :" << endl;
	    cin >> N;

	cout << "Please input you need Number:" << endl;
	for(int i=0;i<N;i++)
	{
		cin >> world[i];
	}


	QuickSort(world,0,5);

	for(int i=0;i<6;i++)
	{
		cout << world[i] << endl;
	}

return 0;
}


