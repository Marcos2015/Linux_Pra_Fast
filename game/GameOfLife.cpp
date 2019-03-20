#include <iostream>
#include <windows.h>
#include <algorithm>
#include <ctime>
#include <iomanip>
using namespace std;

#define MAXNUM 20       /*行列数*/
#define PROBABILITY 0.6 /*初始生存率*/
#define SLEEPTIME 500   /*间隔时间*/
#define KEEPCOUNT 2     /*保持存活状态不变的值*/
#define BORNCOUNT 3     /*繁殖的值*/
const char LIVEPATTERN = '*';  /*表示存活的图案*/
const char DEATHPATTERN = '-'; /*表示死亡的图案*/

struct Cell {
    bool live;
    int  others;
};


// 设置控制台光标的位置
void SetPos(int i,int j) {
    COORD pos = {i, j};
    HANDLE Out = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(Out, pos);
}


// 隐藏光标
void HideCursor() { 
    CONSOLE_CURSOR_INFO cursor_info = {1, 0};  
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}


// 更改窗口大小，自适应
void ChangeWindow() {
    const int columns = 2*MAXNUM;
    const int rows = MAXNUM+7;
    char ch[100];
    int size = sprintf(ch,"mode con cols=%d lines=%d",columns,rows);
    ch[size]='\0';
    system(ch);
    HideCursor();
}


// 主函数
int main() {
    ChangeWindow();
    srand(time(0));
    int alive, gene=0, maxAlive=0;
    Cell cell[MAXNUM][MAXNUM];

    for(int i=0;i<MAXNUM;i++) {
        for(int j=0;j<MAXNUM;j++) {
            if(rand()%1000/1000.0 < PROBABILITY) {
                cell[i][j].live=true;
            } else {
                cell[i][j].live=false;
            }
        }
    }

    while(1) {
        gene++; alive=0;
        // 画图
        SetPos(0,0);
        for(int i=0;i<MAXNUM;i++) {
            for(int j=0;j<MAXNUM;j++) {
                if(cell[i][j].live) {
                    cout<<LIVEPATTERN<<" ";
                    alive++;
                } else {
                    cout<<DEATHPATTERN<<" ";
                }
            }
        }
        if(alive>maxAlive) maxAlive=alive;
        // 输出：代数，存活数，历史最优
        cout << endl;
        cout << left;
        cout << "Generation: " << setw(10) << gene << endl;
        cout << "Alive: " << setw(10) << alive << endl;
        cout << "Max: " << setw(10) << maxAlive << endl;
        
        // 等待
        Sleep(SLEEPTIME);

        // 判断每个细胞的存活与否
        for(int i=0;i<MAXNUM;i++) {
            for(int j=0;j<MAXNUM;j++) {
                cell[i][j].others=0;
                // 左上
                if((i-1)>=0 && (j-1)>=0 && cell[i-1][j-1].live)
                    cell[i][j].others++;
                // 上
                if((i-1)>=0 && cell[i-1][j].live)
                    cell[i][j].others++;
                // 右上
                if((i-1)>=0 && (j+1)<MAXNUM && cell[i-1][j+1].live)
                    cell[i][j].others++;
                // 左
                if((j-1)>=0 && cell[i][j-1].live)
                    cell[i][j].others++;
                // 右
                if((j+1)<MAXNUM && cell[i][j+1].live)
                    cell[i][j].others++;
                // 左下
                if((i+1)<MAXNUM && (j-1)>=0 && cell[i+1][j-1].live)
                    cell[i][j].others++;
                // 下
                if((i+1)<MAXNUM && cell[i+1][j].live)
                    cell[i][j].others++;
                // 右下
                if((i+1)<MAXNUM && (j+1)<MAXNUM && cell[i+1][j+1].live)
                    cell[i][j].others++;
            }
        }

        //繁殖或杀死细胞
        for(int i=0;i<MAXNUM;i++) {
            for(int j=0;j<MAXNUM;j++) {
                switch(cell[i][j].others) {
                    case KEEPCOUNT : break;
                    case BORNCOUNT : cell[i][j].live=true; break;
                    default        : cell[i][j].live=false; break;
                }
            }
        }
    }
    return 0;
}