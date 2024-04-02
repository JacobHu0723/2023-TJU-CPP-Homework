#include<iostream>
using namespace std;

int main() {
    double y = 0.0, n = 0.0;
    cout << "n = ";
    cin >> n;
    if (n > 0)
        y = n + 1;
    else if (n == 0)
        y = 0;
    else
        y = n * n;
    cout << "y = " << y << endl;

    return 0;
}