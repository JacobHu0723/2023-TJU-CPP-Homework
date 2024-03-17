#include<iostream>
using namespace std;

int main() {
    int num = 0;
    cout << "请输入一个自然数: " << endl;
    cin >> num;

    char out[33] = {};
    for (int i = 31; i >= 0; i--) { //短除法计算出余数，并反向记入数组
        out[i] = num % 2 + '0';
        num /= 2;
    }
    out[32] = '\0'; //设置结束，方便后续输出
    for (int i = 0; i <= 31; i++) { //前面无效的0都跳过
        if (out[i] != '0') {
            cout << (out + i) << endl; //从有效数字开始输出
            return 0;
        }
    }
    cout << out[31] << endl; //0的情况
    return 0;
}
