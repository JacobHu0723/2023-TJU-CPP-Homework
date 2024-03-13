#include<iostream>
using namespace std;

int main() {
    int sec_in = 0, sec = 0, min = 0, hour = 0, day = 0;
    cout << "请输入秒数：" << endl;
    cin >> sec_in;
    sec = sec_in % 60;  // 秒
    min = sec_in / 60 % 60;  // 分
    hour = sec_in / 60 / 60 % 24;  // 时
    day = sec_in / 60 / 60 / 24;  // 天
    cout << sec_in << "秒等于" << day << "天" << hour << "小时" << min << "分" << sec << "秒" << endl;

    return 0;
}