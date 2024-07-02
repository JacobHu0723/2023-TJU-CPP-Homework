#include <iostream>
using namespace std;

// 判断素数
bool isPrimeNum(int num) {
    for (int i = 2; i < num; i++)
        if (num % i == 0) return false;
    return true;
}

int main() {
    int num = 0;
    cout << "Enter an even number not less than six: ";
    cin >> num;
    cout << num;
    for (int n = 2; n <= num / 2; n++)
        if (isPrimeNum(n))
            for (int m = n; m < num; m++)
                if (isPrimeNum(m))
                    if (n + m == num)
                        cout << "=" << n << "+" << m;

    return 0;
}