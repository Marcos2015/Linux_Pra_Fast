#include <iostream>
using namespace std;


int Partition(int * p,int low,int high)
{
	int i,j,var;
	i=low,j=high,var=p[low];

    while(i<j)
    {
	while(i<j && p[j]>var) j--;
	if(i<j)
	{
		int temp=p[i];
		p[i]=p[j];
		p[j]=temp;
		i++;
	}

	while(i<j && p[i]<=var) i++;
	if(i<j)
	{
	    int temp=p[j];
	    p[j]=p[i];
	    p[i]=temp;
	    j--;
	}
    }

return i;
}



void QuickSort(int * p,int low,int high)
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

	int N;
        int world[10];
	cout << "请输入多少位数需要排序?" << endl;
	    cin >> N;

	cout << "请输入需要排序的数字"<< endl;
	for(int i=0; i<N; i++)
	{
		cin >> world[i];
	}

	cout << endl;

	for(int i=0;i<N;i++)
	{
		cout << world[i] <<"\t";
	}

	cout << endl;
	cout << "输入结束" << endl;
	cout << endl;

	QuickSort(world,0,N-1);


	for(int i=0;i<N;i++)
	{
		cout << world[i] << endl;
	}

return 0;
}


