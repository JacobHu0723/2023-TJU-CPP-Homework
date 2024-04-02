#include<iostream>
using namespace std;

int main() {
    char ch[21] = "", tmp = '\0';
    cout << "输入一串长度在20以内的字符：";
    cin.getline(ch, 21); //防止输入的字符长度超过20

    for (int i = 0, flag = 0; i < 20; i++) { //冒泡排序，flag标记是否有交换，若整个循环中都没有交换则退出
        flag = 0;
        for (int j = 0; j < 20; j++) {
            if (ch[j + 1] == '\0') continue; //防止越界
            if (ch[j] > ch[j + 1]) {
                tmp = ch[j + 1];
                ch[j + 1] = ch[j];
                ch[j] = tmp;
                flag++;
            }
        }
        if (flag == 0) break; //如果没有交换则退出
    }

    cout << ch << endl;

    return 0;
}