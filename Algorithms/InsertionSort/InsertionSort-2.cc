#include <iostream>
#include <string>
using namespace std;


void InsertionSort(int r[],int len)
{

	int s,j;
	//for(int i=1;i<sizeof(r)/sizeof(r[0]);i++)
	
	
	//由于数组传入函数后会退化为指针
		//sizeof(r)返回的是数组首元素函数名array传递到子函数后就完全退化为一个指针，
		//该指针指向的是数组r所在的地址，即数组r第一个元素r[0]所在的地址。
		//也就是说系统只是告诉该函数这个存储空间存有数据，
		//但并没有告诉函数这个数据存储空间有多大。
		//sizeof(r)的结果是指针变量r所占内存的字节数，具体大小与系统有关，
		//一般在32位机器上占4个字节，r[0]是int类型，同样占4个字节.
		//所以结果为1。所以要获得数组的长度最好在数组定义所在的区域内
		//而不是在函数里使用sizeof(r).


	for(int i=1;i<len;i++)
	{
	    s=r[i];
	    j=i-1;
	   /* 
		for(j=i-1;j<len;j++)
		{
			if(s<r[j])
			{
				r[j+1]=r[j];
				--j;
			}
		}
	    */
	    //不能使用for(j=-1;j<len;j++),因为当r[j]需要与前面一位不断比较,
	    //当j=-1时,就会把逻辑打乱.
	    //
	    //可以用以下for循环写或者while来写(while比较直观)
	    for( ;s<r[j];--j)
	    {
		    r[j+1]=r[j];
	    }


/*

	    while(if(s<r[j])
	    {
		r[j+1]=r[j];
		--j;
	    }

*/			
		r[j+1]=s;
	}

}


int main()
{
	int hello[4]={34,1,90,8};
	int len=sizeof(hello)/sizeof(hello[0]);


	InsertionSort(hello,len);
	    for(int i=0;i<4;i++)
	    {
		    cout << hello[i] << endl;
	    }

return 0;
}

