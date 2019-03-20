#include <iostream>
using namespace std;




void QuickSort(int p[],int low,int high)
{
	int i=low,j=high,Piovat=p[low];

	while(i<j)
	{
		while(i<j && p[j] > Piovat)
		{
			j--; //找到的元素是小于Piovat
		}
		if(p[j]<Piovat)
		{ 
			int temp;
			temp=p[j];
			p[j]=p[i];
			p[i]=temp;
			i++;
		}


		while(i<j && p[i]<=Piovat)
		{
			i++;
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

	if(low<high)
	{
		QuickSort(p,low,i-1);
		QuickSort(p,i+1,high);
	}


}





int main(int argc,char* argv[])
{
	int gui[10]={90,34,100,8,-1};
	cout <<"排序前数组:"<<endl;
	for(int i=0;i<5;i++)
	{
		cout << gui[i] <<"\t";
	}
	cout << endl;

	QuickSort(gui,0,4);

	cout << "排序后的数组:" << endl; 
	for(int i=0;i<5;i++)
	{
		cout << gui[i] << "\t";
	}
	cout << endl;

return 0;
}


