#include <iostream>
using namespace std;

void InsertionSort(int r[],int n)
{
	int i,j ,s;
	
	for(int i=1;i<n;i++)
	{
		s=r[i];
		j=i-1;

		while(s<r[j]) //如果当前元素(即r[i])小于前一位元素(s=r[j]).
		{
			r[j+1]=r[j];  // 那么,就将前一位元素r[j]赋值为当前元素(r[j+1]).
			--j;          //同时,将比较坐标向前移动一位(判断是否需要进入循环,再与前一位进行比较)
					//eg:
					//19,4,2,这种情况下,当i=1时,19与4交换(19在此进行保存下来),然后将r[j+1]=s,4放在0号元素变成:4,19,2.同时--j也让j来到4这个位置
					//进入while循环判断,在原19的位置,拿2与4进行比较,交换后4来到原19的位置,同时--j让j来到比原4位置还要前一位.
					//将2赋值到r[j+1],完成比较.
					//
					

					//本质来说,就是将i这个元素先进行保存,然后不断与前一位进行比较,如果比前一位小,就与前一位交换位置,直到去到数组的0号位置.
		}

		r[j+1]=s;
	}


	
}



int main()
{
	int fg[5]={34,10,89,40,4};
	int len=sizeof(fg)/sizeof(fg[0]);

	InsertionSort(fg,len);


	for(int i=0;i<5;i++)
	{
		cout << fg[i] << "\t";
	}

	putchar(10);
return 0;
}


