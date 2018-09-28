#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;


void BubbleSort(int r[],int len)
{
	int i,j ;

	for(i=0;i<len-1;i++)
	{

		for(j=0;j<len-1;j++)  //曾经试过将j<len-1写错为i<len-1,导致死循环,出现段错误.
		{
			if(r[j]>r[j+1])
			{
				swap(r[j],r[j+1]);
			}

		}

	}

};



int main()
{
	int good[8]={23,8,10,11,-1,55,34,29};
	int len=sizeof(good)/sizeof(good[0]);
	BubbleSort(good,len);

	for(int i=0;i<7;i++)
	{
		cout << good[i] << "\t" ;
	}

putchar(10);
return 0;
}


