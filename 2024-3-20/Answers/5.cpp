#include<iostream>
using namespace std;

int main() {
    int n1 = 0, n2 = 0; //输入数字
    double rs = 0; //计算结果
    char pun = '0'; //运算方式

    cout << "请输入2个数：";
    cin >> n1 >> n2;
    cout << "请输入运算符：";
    cin >> pun;
    switch (pun) //switch...case...判断运算方式
    {
    case '+':
        rs = n1 + n2; break;
    case '-':
        rs = n1 - n2; break;
    case '*':
        rs = n1 * n2; break;
    case '/':
        rs = 1.0 * n1 / n2; break; //当计算结果为小数时输出小数
    case '%':
        rs = n1 % n2; break;
    default:
        cout << "Err: 运算方式错误" << endl; //错误处理，结束运行
        return 0;
        break;
    }
    cout << "计算结果：" << n1 << pun << n2 << "=" << rs;
    return 0;
}