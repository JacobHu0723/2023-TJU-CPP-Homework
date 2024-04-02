#include<iostream>
using namespace std;

int main() {
    int num[11] = { 2, 4, 5, 8, 12, 14, 16, 18, 20, 30 }, nin = 0, i = 0;
    cin >> nin;
    for (i = 0; i < 10; i++) //依次比对寻找到插入位置
        if (*(num + i) >= nin) {
            for (int j = 9; j >= i; j--) //把插入位置后的元素往后移
                num[j + 1] = num[j];
            break;
        }
    num[i] = nin; //插入元素
    for (i = 0; i < 11; i++) //输出
        cout << num[i] << " ";

    return 0;
}