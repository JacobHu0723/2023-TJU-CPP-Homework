#include<iostream>
using namespace std;

int main() {
    int num = 0;
    cout << "请输入一个自然数: " << endl;
    cin >> num;

    char out[33] = {};
    for (int i = 31; i >= 0; i--) {
        out[i] = num % 2 + '0';
        num /= 2;
    }
    out[32] = '\0';
    for (int i = 0; i <= 31; i++) {
        if (out[i] != '0') {
            cout << (out + i) << endl;
            return 0;
        }
    }
    cout << out[31] << endl;
    return 0;
}