#include<iostream>
using namespace std;

const int HOURS_PER_DAY = 24;
const int MINUTES_PER_HOUR = 60;
const int SECONDS_PER_MINUTE = 60;

int main() {
    int sec_in = 0, sec = 0, min = 0, hour = 0, day = 0;
    cout << "请输入秒数：" << endl;
    cin >> sec_in;
    sec = sec_in % SECONDS_PER_MINUTE;  // 秒
    min = sec_in / SECONDS_PER_MINUTE % MINUTES_PER_HOUR;  // 分
    hour = sec_in / SECONDS_PER_MINUTE / MINUTES_PER_HOUR % HOURS_PER_DAY;  // 时
    day = sec_in / SECONDS_PER_MINUTE / MINUTES_PER_HOUR / HOURS_PER_DAY;  // 天
    cout << sec_in << "秒等于" << day << "天" << hour << "小时" << min << "分" << sec << "秒" << endl;

    return 0;
}