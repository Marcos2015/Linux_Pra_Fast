/*
	范例:ch0B_15.cpp
	说明:类的声明与应用 
*/
#include<iostream>
#include<ctime>
using namespace std;
class myclock{
	public :			//设置为公用访问权限 
 	int sec,min,time;	//数据成员 
 	int setclock(int t,int m,int s){	//成员函数 
		sec=s;
		min=m;
		time=t;
   	}
}; 
int main(void){
	myclock clock1;	//声明一个对象 
	cout<<"现在时间="<<__TIME__<<endl;
	cout<<"请设置铃响时间:";
 	clock1.setclock(6,50,32);		//选用成员函数 
	cout<<clock1.time<<":"<<clock1.min<<":"<<clock1.sec<<endl;	//选用数据成员 
	cout<<"闹钟将会在"<<clock1.time<<":"<<clock1.min<<":"<<clock1.sec<<"响起"<<endl;
    system("pause");
	return 0;
}
