#include <iostream>
#include <algorithm>
using namespace std;


int Parition(int r[],int low,int high)
{
	int i=low,j=high,pivot=r[low];

	while(i<j)
	{
		while(i<j && r[j]>pivot)
		{
			j--;
		}

		if(i<j)
		{
			swap(r[i++],r[j]);
		}


		while(i<j && r[i]<=pivot)
		{
			i++;
		}
		if(i<j)
		{
			swap(r[i],r[j]);
		}

	}

	return i;
}


void quicksort(int r[],int low,int high)
{
	int mid;

	if(low<high)
	{
		
	    mid=Parition(r,low,high);
	    quicksort(r,low,mid-1);
	    quicksort(r,mid+1,high);
	}

}

int main()
{
	int er[10]={2,90,2,56,-1,89,52,10,30,7};

	quicksort(er,0,9);

	for(int i=0;i<10;i++)
	{
		cout << er[i] << "\t";
	}

	putchar(10);
return 0;
}


