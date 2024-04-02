#include<iostream>
using namespace std;

//==========================================================
//	函数名称：	printMatrix    
//	函数功能：	打印矩阵
//	入口参数：  矩阵的数组
//	返回参数：	无    
//========================================================== 
void printMatrix(int array[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            cout << array[i][j] << "\t";
        cout << "\n";
    }
    cout << "\n";
}

//==========================================================
//	函数名称：	exchangeRow
//	函数功能：	交换两行
//	入口参数：  矩阵的数组，两行的行号
//	返回参数：	无
//==========================================================
void exchangeRow(int array[5][5], int row1, int row2) {
    int temp = 0;
    for (int i = 0; i < 5; i++) {
        temp = array[row1][i];
        array[row1][i] = array[row2][i];
        array[row2][i] = temp;
    }
}

//==========================================================
//	函数名称：	simplifyRow
//	函数功能：	化简行，将行中所有元素化为最简
//	入口参数：  矩阵的数组，行号
//	返回参数：	无
//==========================================================
void simplifyRow(int array[5][5], int row) {
    int gcd = 0;
    int i = 0;

    // 如果当前行全为0，则不需要化简
    for (int s = 0, i = 0; i < 5; i++) {
        if (array[row][i] == 0)
            s++;
        if (s == 5)
            return;
    }

    // 找到第一个非零元素作为初始值
    for (i = 0; i < 5; i++) {
        if (array[row][i] != 0) {
            gcd = array[row][i];
            break;
        }
    }

    // 计算当前行中其他元素与当前最大公约数的最大公约数
    for (; i < 5; i++)
        if (array[row][i] != 0) {
            int a = gcd;
            int b = array[row][i];
            while (b != 0) {
                int temp = b;
                b = a % b;
                a = temp;
            }
            gcd = a;
        }

    // 将当前行中所有元素除以得到的最大公约数
    for (int j = 0; j < 5; j++)
        array[row][j] /= gcd;
}


int main() {
    int array[5][5] = {};
    int sel = 0;
    cout << "请输入5阶方阵的元素：" << endl;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> array[i][j];
    cout << "请输入目标矩阵类型(1：上三角阵，2：下三角阵)：";
    cin >> sel;
    if (sel == 1) {
        simplifyRow(array, 0);
        for (int i = 0; i < 5; i++) { //标准行 
            if (array[i][i] == 0) {
                int s = 0;
                for (int row = i + 1; row < 5; row++) {
                    if (array[row][i] != 0) {
                        exchangeRow(array, i, row);
                        break;
                    }
                    else s++;
                }
                if (s == 4)
                    continue;
            }
            for (int row = i + 1; row < 5; row++) { //被消元行
                for (int column = 4; column >= i; column--)
                    array[row][column] = array[row][column] * array[i][i] - array[i][column] * array[row][i];
                simplifyRow(array, row);
            }
        }
    }
    else {
        simplifyRow(array, 4);
        for (int i = 4; i >= 0; i--) { //标准行 
            if (array[i][i] == 0) { //如果对角线元素为0，交换行
                int s = 0;
                for (int row = i - 1; row >= 0; row--) {
                    if (array[row][i] != 0) {
                        exchangeRow(array, i, row);
                        break;
                    }
                    else s++;
                }
                if (s == 4)
                    continue;
            }
            for (int row = i - 1; row >= 0; row--) { //被消元行
                for (int column = 4; column >= i; column--)
                    array[row][column] = array[row][column] * array[i][i] - array[i][column] * array[row][i];
                simplifyRow(array, row);
            }
        }
    }

    printMatrix(array);

    return 0;
}