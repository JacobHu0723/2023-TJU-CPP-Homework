#include<iostream>
using namespace std;

int main() {
    double matrix[2][2] = { 0 };
    cout << "请输入矩阵的元素：" << endl;
    for (int i = 0; i < 2; i++) // 输入矩阵元素
        for (int j = 0; j < 2; j++)
            cin >> matrix[i][j];

    cout << "\n矩阵为：" << endl;
    for (int i = 0; i < 2; i++) { // 输出矩阵
        for (int j = 0; j < 2; j++)
            cout << matrix[i][j] << "\t";
        cout << endl;
    }

    cout << "\n矩阵的秩为：";
    if ((matrix[0][0] / matrix[1][0]) == ((matrix[0][1]) / (matrix[1][1]))) //如果两行成比例，则秩为1
        cout << "1" << endl;
    else //否则秩为2
        cout << "2" << endl;

    return 0;
}