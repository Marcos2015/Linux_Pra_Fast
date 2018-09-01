#include <iostream>
using namespace std;

void quicksort(int r[],int low,int high)
{
	if(low<high)
	{
		int pos,s,left,right;
		s=r[low];
		right=high;


		while(left<right)
		{
			while(left<right && r[right] >= s )
			{
				--right;
			}
			r[left]=r[right];
			while(left<right && r[left] <= s )
			{
				++left;
			}
			r[right]=r[left];
		}
		r[left]=s;
		pos=left;

		if(low<pos-1)
		{
			quicksort(r,low,pos-1);
		}
		if((pos+1)<high)
		{
			quicksort(r,pos+1,high);
		}
	}
}


void test_quicksort()
{
	int r[]={13,9,8,233,90};
	quicksort(r,0,7);

	for(int i=0;i<7;i++)
	{
		cout << r[i] << "\t";
	}
}


int main()
{
	test_quicksort();
	return 0;
}



