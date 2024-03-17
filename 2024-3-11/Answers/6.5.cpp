#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    double num = 0;
    cout << "请输入0～999之间的浮点数" << endl;
    cin >> num;
    cout << setprecision(2) << fixed << num << endl; //setprecision并非严格的四舍五入，是近似的，使用round()可以解决

    return 0;
}

/***************************************************
                     运行结果
请输入0～999之间的浮点数
0.995
0.99
****************************************************/