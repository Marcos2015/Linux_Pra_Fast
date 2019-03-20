#include <set>
#include <string>
#include <iostream>
using namespace std;


int main()
{
    set<int> c;

    c.insert(1);
    c.insert(2);
    c.insert(5);
    c.insert(8);
    c.insert(9);


    cout << *c.lower_bound(4)<<endl;
    cout << *c.upper_bound(8)<<endl;



return 0;
}


