#include<iostream>
using namespace std;

int main() {
    int n = 0;
    long double den = 1.0, pi_q = 0.0;
    while ((1 / den) >= 1e-6) { //精度控制
        pi_q += pow(-1, n) * (1 / den); //四分之PI加上分数，其中pow函数实现加减号
        den += 2;
        n++;
    }
    pi_q += pow(-1, n) * (1 / den);
    cout << (pi_q * 4) << endl;
    //printf("%.20lf\n", (pi_q * 4));

    return 0;
}