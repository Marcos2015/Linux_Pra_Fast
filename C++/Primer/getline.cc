#include <iostream>
//#include <string>

int main()
{
//using namespace std;
    int Arsize=20;
    char name[Arsize];
        
    std::cout << "enter your name: " << std::endl;
    std::cin.getline( name , 20 );
	
    std::cout << "          printf your name : " << name << std::endl;
return 0;
}



