#include <iostream>
using namespace std;


int main()
{
    int* ptr=new int(40);
    delete ptr;
    ptr=NULL;
    int a=100;
    ptr=&a;
    	cout << *ptr << endl;
return 0;
}


