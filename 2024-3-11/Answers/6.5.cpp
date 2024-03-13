#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    double num = 0;
    cout << "请输入0～999之间的浮点数" << endl;
    cin >> num;
    cout << setprecision(2) << fixed << num << endl;

    return 0;
}