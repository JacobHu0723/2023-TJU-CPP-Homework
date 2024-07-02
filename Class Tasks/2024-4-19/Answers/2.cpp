#include <iostream>
using namespace std;

int main() {
    int n = 0;
    char* ch = nullptr;
    cout << "Length: ";
    cin >> n;
    cin.ignore();
    ch = new char[n+1] {0};
    if (ch == nullptr) {
        cerr << "Failed to allocate memory" << endl;
        return 1;
    }
    cin.getline(ch, n+1);
    for (int i = 0; i < n; i++) {   
        if (*(ch + i) + 4 > 'z' || (*(ch + i) + 4 > 'Z' && *(ch + i) + 4 < 'a'))
            *(ch + i) -= 22;
        else
            *(ch + i) += 4;
    }
    cout << ch << endl;
    delete[] ch;
    ch = nullptr;

    return 0;
}