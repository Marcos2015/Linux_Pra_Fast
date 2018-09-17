#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main()
{
    vector<int>v(2);
    v[0]=10;
    int *p=&v[0];
    cout <<"容器第一个元素迭代指针*p="<<*p<<endl;

    v.push_back(20);
    cout <<"容器变化后第一个元素迭代指针*p="<<*p<<endl;


    cout << v.size() << endl;
    vector<int>::iterator TL=v.begin();

    while(TL!=v.end())
    {
	    cout << *TL << "\t";
	    TL++;
    }
    cout << endl;



    /*
    v.push_back(100);

    cout <<"容器变化后第一个元素迭代指针(2)*p="<<*p<<endl;
    */


cout <<"*****************"<<endl;
    int *i=v.data();
    cout <<*i<<endl;


    
    deque<int>y(2);
    y[0]=99;
    int * test_y=&y[0];
    cout <<"deque 第一个元素的指针迭代器*test_y="<<*test_y<<endl;


    y.push_back(100);
    cout <<"deque 第一个元素的指针迭代器*test_y="<<*test_y<<endl;

    
return 0;
}


