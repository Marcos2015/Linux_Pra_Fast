#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

struct student
{
    char name[20];
    int age;
};


//typedef student* p


int main()
{
    struct student* p=new struct student;
	if(!p)
	{
	    exit(OVERFLOW);
	}

    cout << "please input your name!"<< endl;
    	cin >> p->name;
    cout <<"please input your age!"<< endl;
    	cin >> p->age;
	
	cout << p->name  << "  "<< p->age << endl;

delete p;
return 0;
}


    
