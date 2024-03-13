#include<iostream>
using namespace std;
int main() {
    char ch = 'A';
    cout << "请输入字符：" << endl;
    cin >> ch;  // 输入字符
    if (ch >= 'A' && ch <= 'Z')  // 若是大写英文字符
        cout << (ch += 32) << endl;  // 输出对应的小写英文字符
    else
        cout << ch << endl;  // 若不是大写英文字符，则输出原字符
    return 0;
}