#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.14159265358979323846;
class Triangle {
public:
    // 判断边长条件
    Triangle(int a, int b, int c) : a(a), b(b), c(c) {
        if (a + b <= c || a + c <= b || b + c <= a) {
            cout << "无法创建三角形！" << endl;
            exit(0);
        }
    }
    // 计算周长
    int Perimeter() {
        return a + b + c;
    }
    // 计算面积
    double Area() {
        double p = Perimeter() / 2.0;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }
    // 求a边的对角
    double Angle_a() {
        return ((acos((b * b + c * c - a * a) / (2 * b * c))) * 180 / PI);
    }
    // 求b边的对角
    double Angle_b() {
        return ((acos((a * a + c * c - b * b) / (2 * a * c))) * 180 / PI);
    }
    // 求c边的对角
    double Angle_c() {
        return ((acos((a * a + b * b - c * c) / (2 * a * b))) * 180 / PI);
    }
    // 判断是否为直角三角形
    bool operator!() const {
        return a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a;
    }
    // 重载运算符>比较两个三角形的面积
    friend bool operator>(Triangle& t1, Triangle& t2) {
        return t1.Area() > t2.Area();
    }
private:
    double a, b, c;
};


int main() {
    int x = 0, y = 0, z = 0, x1 = 0, y1 = 0, z1 = 0;
    cin >> x >> y >> z;
    cin >> x1 >> y1 >> z1;
    Triangle t1(x, y, z);
    Triangle t2(x1, y1, z1);
    if (t1 > t2)
        cout << "t1的面积大于t2" << endl;
    else if (t2 > t1)
        cout << "t2的面积大于t1" << endl;
    else
        cout << "t1和t2的面积相等" << endl;
    if (!t1)
        cout << "t1是直角三角形" << endl;
    else
        cout << "t1不是直角三角形" << endl;
    if (!t2)
        cout << "t2是直角三角形" << endl;
    else
        cout << "t2不是直角三角形" << endl;
    cout << "t1的三个内角为：" << t1.Angle_a() << "° " << t1.Angle_b() << "° " << t1.Angle_c() << "°" << endl;
    cout << "t2的三个内角为：" << t2.Angle_a() << "° " << t2.Angle_b() << "° " << t2.Angle_c() << "°" << endl;

    return 0;
}