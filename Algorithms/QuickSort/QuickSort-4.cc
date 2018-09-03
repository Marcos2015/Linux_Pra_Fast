#include <iostream>
using namespace std;

void QuickSort(int k[],int low,int high)
{
	int i=low,j=high,Piovat=k[low];

	while(i<j)
	{
		
		while(i<j && k[j] >Piovat ) j--;

		if(i<j)
		{
			int temp;
			temp=k[i];
			k[i]=k[j];
			k[j]=temp;
		}




		while(i<j && k[i]<=Piovat ) i++;
		if(i<j)
		{
			int temp;
			temp=k[i];
			k[i]=k[j];
			k[j]=temp;
		}

	}
	if(low<high)
	{
		QuickSort(k,low,i-1);
		QuickSort(k,i+1,high);
	}

}



int main()
{
	int h[]={4,2,90,56};
	QuickSort(h,0,3);

	for(int i=0;i<4;i++)
	{
		cout << h[i] << endl;
	}
return 0;
}



