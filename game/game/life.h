const int maxrow = 20, maxcol = 60; // grid dimensions
 
class Life {
public:	
	void initialize();
	void print();
	void update();		
	int neighbor_count(int row, int col);	
private:
	int grid[maxrow + 2][maxcol + 2]; // allows for two extra rows and columns
};
 
#define DONE
#include "life.cpp"
/*
--------------------- 
作者：howard2005 
来源：CSDN 
原文：https://blog.csdn.net/howard2005/article/details/79294248 
版权声明：本文为博主原创文章，转载请附上博文链接！
*/


