#include<iostream>
#include<ctime>
#include<cstdlib>
#include<unistd.h>
using namespace std;
 
void init();
void printArea();
void evol();
int surroundingLifeCount(int y, int x);
 
bool** cells;
int lenArea;
int amount;
 
int main(void) {
	cout << "输入网格宽度: ";
	cin >> lenArea; 
	cells = new bool*[lenArea];
	for(int i=0;i<lenArea;i++) cells[i] = new bool[lenArea];
	cout << "输入初始个数: ";
	cin >> amount;
	init();
	while(true) {
	//	system("cls");
		printArea();
		evol();
		sleep(1);
	}
}
 
void init() {
	srand(time(NULL));
	for(int i=0;i<lenArea;i++) for(int j=0;j<lenArea;j++) cells[i][j] = false;
	for(int i=0;i<amount;i++) {
		int m = rand()%lenArea,n = rand()%lenArea;
		if(cells[m][n]) {i--;continue;}
		else cells[m][n] = true;
	}
}
 
void printArea() {
	for(int i=0;i<lenArea;i++) {
		for(int j=0;j<lenArea;j++)
			if(cells[i][j]) cout << " " << "*";
			else cout << "  ";
		cout << endl;
	}
}
 
void evol() {
	int lifeCount, x, y;
	for(int i=0;i<lenArea;i++) {
		for(int j=0;j<lenArea;j++) {
			lifeCount = surroundingLifeCount(i,j);
			if(cells[i][j]) if(lifeCount<2 || lifeCount>3) cells[i][j] = false;
			if(cells[i][j]==false && lifeCount==3) cells[i][j] = true;
		}
	}
}
 
int surroundingLifeCount(int y, int x) {
	int curY, curX;
	int lifeCount = 0;
	for(curY=y-1;curY<=y+1;curY++)
		for(curX=x-1;curX<=x+1;curX++)
			if( !(curX==x&&curY==y) && curY>=0 && curY<lenArea && curX>=0 && curX<lenArea && cells[curY][curX]) lifeCount++;
	
	return lifeCount;
}
