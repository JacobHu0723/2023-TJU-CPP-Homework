#include<iostream>
using namespace std;

int main()
{
    double num = 0.0;
    cout << "请输入0～999之间的浮点数" << endl;
    cin >> num;
    int temp = num * 1000;  // 乘1000是为了保留3位小数
    if (temp % 10 >= 5)  // 判断小数点后第三位是否大于等于5
        temp = temp / 10 + 1;  // 五入
    else
        temp = temp / 10;  // 四舍
    num = temp / 100.0;  // 除100.0是为了保留2位小数
    cout << "取2位有效数字四舍五入的结果为：" << num << endl;

    return 0;
}