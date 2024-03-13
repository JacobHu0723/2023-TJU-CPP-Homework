#include<iostream>
using namespace std;
int main() {
    double radius = 0.0, perimeter = 0.0, area = 0.0;
    do {
        cin >> radius;
        if (radius <= 0) cout << "Invalid input" << endl;
    } while (radius <= 0);
    perimeter = 2 * 3.14159 * radius;
    area = 3.14159 * radius * radius;
    cout << "Perimeter: " << perimeter << "\nArea: " << area << endl;
    return 0;
}