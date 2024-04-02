#include<iostream>
#include<ctime>
using namespace std;

int main() {
    int rows = 0, ** array = nullptr, tmp = 0;
    cout << "请输入矩阵的行数：";
    cin >> rows;

    //动态分配内存，生成二维数组，存储矩阵数据
    array = new int* [rows](); 
    if (array == nullptr) {
        cout << "动态内存分配失败！" << endl; //检查内存是否分配成功
        exit(1);
    }
    for (int i = 0; i < rows; i++)
        array[i] = new int [5]();
    for (int i = 0; i < rows; i++) //检查内存是否分配成功
        if (array[i] == nullptr) {
            cout << "动态内存分配失败！" << endl;
            exit(1);
        }

    //输入矩阵数据
    cout << "请输入矩阵元素（若要生成随机矩阵请输入rand）：" << endl;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < 5; j++)
            cin >> *(*(array + i) + j);

    //如果输入非int类型数据，则随机生成一个矩阵
    if (cin.fail()) {
        srand((unsigned)time(0)); //随机数种子，用于解决 rand() 伪随机问题
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < 5; j++)
                *(*(array + i) + j) = rand();
    }

    //输出原矩阵
    cout << "\n原矩阵：" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 5; j++)
            cout << *(*(array + i) + j) << "\t";
        cout << endl;
    }

    //输出转置矩阵
    cout << "\n转置矩阵：" << endl;
    for (int j = 0; j < 5; j++) { 
        for (int i = 0; i < rows; i++)
            cout << *(*(array + i) + j) << "\t";
        cout << endl;
    }

    //释放内存
    for (int i = 0; i < rows; i++) //释放列内存
        delete[] array[i];
    delete [] array; //释放行内存
    array = nullptr; //指针变量置空

    return 0;
}