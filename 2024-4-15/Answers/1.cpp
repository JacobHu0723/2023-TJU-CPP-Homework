#define _USE_MATH_DEFINES // 定义M_PI
#include <iostream>
#include <cmath>
using namespace std;

// 矩形法
double Rectangle(int n) {
    double area = 0;
    for (int i = 0; i < n; i++)
        area += M_PI/n * (sin(i * M_PI / n) + cos(i * M_PI / n));
    return area;
}

// 梯形法
double Trapezoid(int n) {
    double area = 0;
    for (int i = 0; i < n; i++)
        area += M_PI/n * (sin(i * M_PI / n) + cos(i * M_PI / n) 
            + sin((i + 1) * M_PI / n) + cos((i + 1) * M_PI / n)) / 2;
    return area;
}

int main() {
    int n = 0;
    cout << "请输入精确度n：";
    cin >> n;   
    printf("矩形法积分结果：%.20f\n", Rectangle(n)); // 使用printf可以保留20位小数
    printf("梯形法积分结果：%.20f\n", Trapezoid(n));
    return 0;
}