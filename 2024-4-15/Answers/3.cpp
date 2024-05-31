/**************************************
* 本程序由ChatGPT生成
**************************************/
#include <iostream>
using namespace std;

class Integer { // 定义一个Integer类
public:
    int GetD() { // 获取d的值
        return d;
    }
    void SetD(int value) { // 设置d的值
        d = value;
    }
    bool IsOdd() { // 判断是否为奇数
        return (d % 2 != 0);
    }
    bool IsPrime() { // 判断是否为素数
        if (d <= 1)
            return false;
        for (int i = 2; i < d; i++)
            if (d % i == 0)
                return false;
        return true;
    }
private:
    int d;
};

int main() {
    Integer num1, num2;
    num1.SetD(15); // 设置num1的值为15
    if (num1.IsOdd())
        cout << "15不是偶数" << endl;
    else
        cout << "15是偶数" << endl;
    if (num1.IsPrime())
        cout << "15是素数" << endl;
    else
        cout << "15不是素数" << endl;

    num2.SetD(31); // 设置num2的值为31
    if (num2.IsOdd())
        cout << "31不是偶数" << endl;
    else
        cout << "31是偶数" << endl;
    if (num2.IsPrime())
        cout << "31是素数" << endl;
    else
        cout << "31不是素数" << endl;

    return 0;
}