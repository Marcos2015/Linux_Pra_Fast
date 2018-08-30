#include <iostream>
using namespace std;




int Partition(int p[],int low,int high)
{
	int i=low,j=high,Piovat=p[low];

	while(i<j)
	{
		while(i<j)
		{
			if(p[j]>Piovat) j--; //找到的元素是小于Piovat
		}
		if(p[j]<Piovat)
		{ 
			int temp;
			temp=p[j];
			p[j]=p[i];
			p[i]=temp;
			i++;
		}


		while(i<j)
		{
			if(p[i]<=Piovat) i++;
		}
		if(p[i]>Piovat)
		{
		    int temp;
		    temp=p[i];
		    p[i]=p[j];
		    p[j]=temp;
		    j--;
		}
	}

return i;
}



void QuickSort(int *p,int low,int high)
{
	int temp;
	if(low<high)
	{
		temp=Partition(p,low,high);
		QuickSort(p,low,temp-1);
		QuickSort(p,temp+1,high);
	}

}


int main(int argc,char* argv[])
{
	int gui[10]={90,34,100,8,-1};
	QuickSort(gui,0,4);
	for(int i=0;i<sizeof(gui)-1;i++)
	{
		cout << gui[i] << "\t";
	}
	cout << endl;

return 0;
}


