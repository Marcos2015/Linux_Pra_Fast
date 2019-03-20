#include "utility.h"
int main() // Program to play Conway's game of Life
/*Pre: The user supplies an initial configuration of living cells.
  Post: The program prints a sequence of pictures showing the changes in the
        configuration of living cells according to the rules for the game of Life.
  Uses: The class Life and its methods initialize(), print(), and update().
        The functions instructions(); user_says_yes().*/
{
	Life configuration;
	instructions();
	configuration.initialize();		
	cout << "count = " << configuration.neighbor_count(2, 3) << endl;
	configuration.print();		
	cout << "Continue viewing new generations? " << endl;
	while (user_says_yes()) {
		configuration.update();
		configuration.print();
		cout << "Continue viewing new generations? " << endl;
	}
 
	return 0;
}
/*
--------------------- 
作者：howard2005 
来源：CSDN 
原文：https://blog.csdn.net/howard2005/article/details/79294248 
版权声明：本文为博主原创文章，转载请附上博文链接！
*/


