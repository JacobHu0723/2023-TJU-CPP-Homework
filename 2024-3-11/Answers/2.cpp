#include<iostream>
using namespace std;
int main() {
    cout << "请输入0-999之间的整数：" << endl;
    int n = 0, units = 0, tens = 0, hundreds = 0;
    cin >> n;
    if (n < 0) n = 0;
    else if (n > 999) n = 999;
    units = n % 10;
    tens = (n / 10) % 10;
    hundreds = n / 100;
    cout << n << "=" << hundreds << "×100+" << tens << "×10+" << units << endl;
    return 0;
}