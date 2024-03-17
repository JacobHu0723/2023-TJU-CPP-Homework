#include <iostream>
using namespace std;

int main() {
    int num = 0, n1 = 0, n2 = 0, n3 = 0, n4 = 0;
    cout << "请输入一个0-15之间的整数: " << endl;
    cin >> num;
    n1 = num % 2; //进行长除法
    num /= 2;
    n2 = num % 2;
    num /= 2;
    n3 = num % 2;
    num /= 2;
    n4 = num % 2;

    if (n4 != 0) //判断前面的无效的0不输出
        cout << n4;
    if (n3 != 0 || n4 != 0)
        cout << n3;
    if (n2 != 0 || n3 != 0 || n4 != 0)
        cout << n2;
    cout << n1 << endl;

    return 0;
}
