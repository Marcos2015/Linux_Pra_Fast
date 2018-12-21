#include<iostream>
#include<time.h>
#define max 30
using namespace std;


//判断溢出与不足

bool judge(int a, int b) {
    if (a > -1 && b > -1 && a < max && b < max) {
        return true;
    }
       return false; 
}


//生命繁衍
void Grow(int A[][max]) {
    for (int i = 0; i < max; i++) {
        for (int j = 0; j < max; j++) {
            int n = 0;
            if (judge(i-1,j-1)==true && A[i - 1][j - 1] == 1) n++;
            if (judge(i - 1, j) == true && A[i - 1][j] == 1) n++;
            if (judge(i - 1, j + 1) == true && A[i - 1][j + 1] == 1) n++;
            if (judge(i , j - 1) == true && A[i][j - 1] == 1) n++;
            if (judge(i - 1, j + 1) == true && A[i - 1][j + 1] == 1) n++;
            if (judge(i + 1, j - 1) == true && A[i + 1][j - 1] == 1) n++;
            if (judge(i + 1, j ) == true && A[i + 1][j] == 1) n++;
            if (judge(i + 1, j + 1) == true && A[i + 1][j + 1] == 1) n++;
            if (n == 3) {
                A[i][j] = 1;
            }
            else {
                if (n != 2) {
                    A[i][j] = 0;
                }
            }

        }
    }


}


//打印表格
void print(int A[][max]) {
    for (int i = 0; i < max; i++) {
        for (int j = 0; j < max; j++) {
            if (A[i][j] == 1) {
                cout << "■";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}


//设置延迟时间
void   Delay(int   time)
{
    clock_t   now = clock();

    while (clock() - now   <   time);
}


//初始化
void initialization(int A[][max]) {
    int a, b;
    cout << "请输入你的活细胞所在的位置,并且以输入999，999结束！";
    cin >> a >> b;
    while(a != 999 && b != 999) {
        A[a][b] = 1;
        cout<<"请继续输入你的活细胞所在的位置：";
        cin >> a >> b;
    }
}

int main() {
    
    int A[max][max] = { 0 };
    initialization(A);
    while (1) {
        print(A);
        Grow(A);
        Delay(5 * 1000);
        system("cls");
    }
    system("pause");
    return 0;
}
/*
--------------------- 
作者：coolsunxu 
来源：CSDN 
原文：https://blog.csdn.net/coolsunxu/article/details/53375636 
版权声明：本文为博主原创文章，转载请附上博文链接！
*/

