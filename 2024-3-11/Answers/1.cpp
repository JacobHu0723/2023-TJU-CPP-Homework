#include<iostream>
using namespace std;
int main() {
    double radius = 0.0, perimeter = 0.0, area = 0.0;
    cout << "输入圆的半径：" << endl;
    do {
        cin >> radius;
        if (radius <= 0) cout << "无效输入" << endl; //无效输入，重新输入
    } while (radius <= 0);
    perimeter = 2 * 3.14159 * radius; //周长
    area = 3.14159 * radius * radius; //面积
    cout << "周长: " << perimeter << "\n面积: " << area << endl;
    return 0;
}