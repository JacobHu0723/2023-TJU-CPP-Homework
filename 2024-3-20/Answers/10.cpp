#include<iostream>
using namespace std;

int main() {
    int sel = 0;
    while (1) {
        cout << "输入选项：1 三角形  2 菱形  3 正方形  4 直线  5 退出程序    ";
        if (!(cin >> sel)) { //异常处理
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 网上查的，解决输入非数字字符，忽略缓冲区中的错误字符
            cout << "输入有误，请重新输入！" << endl;
            continue;
        }
        switch (sel) {
        case 1: // 三角形
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    if (j < (3 - i))
                        cout << "  ";
                    else
                        cout << "* ";
                }
                cout << '\n';
            }
            exit(0);
        case 2: // 菱形
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                    if (abs(j - 2) <= (-abs(i - 2) + 2))
                        cout << "* ";
                    else
                        cout << "  ";
                }
                cout << '\n';
            }
            exit(0);
        case 3: // 正方形
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++)
                    cout << "* ";
                cout << '\n';
            }
            exit(0);
        case 4: // 直线
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    if (j != (3 - i))
                        cout << "  ";
                    else
                        cout << "* ";
                }
                cout << '\n';
            }
            exit(0);
        case 5: // 退出程序
            exit(0);
        default:
            cout << "输入有误，请重新输入！" << endl;
            break;
        }
    }
    return 0;
}