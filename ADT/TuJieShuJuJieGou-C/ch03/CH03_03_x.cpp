#include <iostream>
using namespace std;


int main()
{
 //   int* ptr=(int*)malloc(sizeof(int));
   int*ptr=new int;
    *ptr=50;
    float* fl=new float;
    *fl=0.5;
    delete ptr;
    delete fl;
return 0;

}
