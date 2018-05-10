/*
	范例:ch0B_12.cpp
	说明:动态分配内存 
*/
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(void){
	int num;
    srand(time(NULL));
    cout<<"请输入数组的大小:";	 
    cin>>num;
   	int *a=new int[num];	//声明指针变量,指向动态分配的内存
    for(int i=0;i<num;i++){	//利用随机数设置数组的初始值 
    	a[i]=rand()%101;
    }
	for(int i=0;i<num;i++){
    	cout<<a[i]<<" ";
    }
    cout<<endl;
    delete []a; 			//释放指针指向的内存
    system("pause");
	return 0;
}
