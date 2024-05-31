/**********************************
* 本程序由ChatGPT生成
* 其中最大公约数使用递归调用，极大地简化了代码，值得学习！
* 最小公倍数调用了最大公约数函数，也是一种简化代码的方法，也值得学习
**********************************/

#include <iostream>
using namespace std;

// 最大公约数
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b); // 辗转相除法，递归调用
}

// 最小公倍数
int lcm(int a, int b) {
    return (a * b) / gcd(a, b); // 调用gcd函数，再计算最小公倍数
}

int main() {
    int num1 = 0, num2 = 0;
    cout << "请输入两个整数：";
    cin >> num1 >> num2;
    cout << "最大公约数为：" << gcd(num1, num2) << endl;
    cout << "最小公倍数为：" << lcm(num1, num2) << endl;

    return 0;
}