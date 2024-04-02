#include<iostream>
using namespace std;

int main() {
    double array[5][5] = {}, ratio = 0.0;
    int sel = 0;
    cout << "请输入5阶方阵的元素：" << endl;

    // 输入矩阵元素
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> array[i][j];
    cout << "请输入目标矩阵类型(1：上三角阵，2：下三角阵)：";
    cin >> sel;

    // 输出目标矩阵
    if (sel == 1) // 上三角阵
        for (int i = 1; i < 5; i++)
            for (int j = 0; j < i; j++)
                array[i][j] = 0;
    else // 下三角阵  
        for (int i = 0; i < 4; i++)
            for (int j = (i + 1); j < 5; j++)
                array[i][j] = 0;

    // 输出矩阵
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            cout << array[i][j] << "\t";
        cout << "\n";
    }

    return 0;
}