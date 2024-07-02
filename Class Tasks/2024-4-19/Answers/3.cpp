// Generated with the assistance of ChatGPT 4
// The method of allocating memory for two-dimensional array heap is worth learning.(Rows #17 #18)
#include <iostream>
#include <ctime>

using namespace std;

void sort_row(int (*p)[5], int* order, int row_num);

int main() {
    const int col_num = 5;
    int row_num = 0;

    cout << "请输入矩阵的行数: ";
    cin >> row_num;

    int (*matrix)[5] = new int[row_num][5];
    int* order = new int[row_num];

    // 初始化随机数种子
    srand(time(0));

    for (int i = 0; i < row_num; i++) {
        for (int j = 0; j < col_num; j++) {
            matrix[i][j] = rand() % 100;
        }
    }

    cout << "原始矩阵:" << endl;
    for (int i = 0; i < row_num; i++) {
        for (int j = 0; j < col_num; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < row_num; i++) {
        order[i] = i;
    }

    sort_row(matrix, order, row_num);

    cout << "排序后的矩阵:" << endl;
    for (int i = 0; i < row_num; i++) {
        int row_index = order[i];
        int row_sum = 0;
        for (int j = 0; j < col_num; j++) {
            cout << matrix[row_index][j] << " ";
            row_sum += matrix[row_index][j];
        }
        cout << "| " << row_sum << endl;
    }

    delete[] matrix; matrix = nullptr;
    delete[] order; order = nullptr;

    return 0;
}

void sort_row(int (*p)[5], int* order, int row_num) {
    // 计算每行和
    int* row_sums = new int[row_num];
    for (int i = 0; i < row_num; i++) {
        row_sums[i] = 0;
        for (int j = 0; j < 5; j++) {
            row_sums[i] += p[i][j];
        }
    }

    // 排序
    for (int i = 0; i < row_num - 1; i++) {
        for (int j = i + 1; j < row_num; j++) {
            if (row_sums[order[i]] < row_sums[order[j]]) {
                int temp = order[i];
                order[i] = order[j];
                order[j] = temp;
            }
        }
    }

    delete[] row_sums; row_sums = nullptr;
}
