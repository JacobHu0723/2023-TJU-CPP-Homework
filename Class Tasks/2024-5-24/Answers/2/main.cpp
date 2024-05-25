#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main() {
    //Read the binary file
    ifstream file("out1.dat", ios::binary);
    if (!file.is_open()) {
        cerr << "Can't open the file!" << endl;
        return 1;
    }
    int nums[20];
    file.read((char*)nums, sizeof(nums));
    file.close();

    //Print out the palindrome from small the large
    sort(nums, nums + 20);
    for (int i = 0; i < 20; i++)
        if (nums[i]%10 == nums[i]/100)
            cout << nums[i] << " ";

    return 0;
}
