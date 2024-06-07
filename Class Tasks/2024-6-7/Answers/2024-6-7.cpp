#include<iostream>
using namespace std;

class Time {
public:
    Time(int h, int m, int s) : hour(h), minute(m), second(s) {}

    Time(const Time& t) : hour(t.hour), minute(t.minute), second(t.second) {
        if (hour < 0 || hour > 23 || minute < 0 || minute > 59 || second < 0 || second > 59) {
            cout << "无法创建时间" << endl;
            exit(0);
        }
    }

    void showTime() {
        cout << hour << ":" << minute << ":" << second;
    }

    bool operator>(const Time& t) {
        if (hour > t.hour) {
            return true;
        }
        else if (hour == t.hour && minute > t.minute) {
            return true;
        }
        else if (hour == t.hour && minute == t.minute && second > t.second) {
            return true;
        }

        return false;
    }

    Time operator+(const Time& t) {
        int h = hour + t.hour;
        int m = minute + t.minute;
        int s = second + t.second;

        if (s >= 60) {
            m++;
            s -= 60;
        }
        if (m >= 60) {
            h++;
            m -= 60;
        }
        return Time(h, m, s);
    }


private:
    int hour, minute, second;

};

int main() {
    Time time1(12, 30, 45);
    Time time2(5, 20, 10);

    cout << "时间1： ";
    time1.showTime();
    cout << "\n时间2： ";
    time2.showTime();


    if (time1 > time2)
        cout << "\n时间1先于时间2" << endl;
    else
        cout << "\n时间2先于时间1" << endl;

    cout << "时间相加结果：: ";
    (Time(time1 + time2)).showTime();

    return 0;
}
