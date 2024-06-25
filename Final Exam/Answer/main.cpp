#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int num[10] = {0};
    int sum[10] = {0};

    // Read the file
    ifstream infile(".\\date.dat", ios::in | ios::binary);
    if(!infile) {
        cerr << "Can't open the file!" << endl;
        return 1;
    }
    for (int i = 0; i < 10; i++)
        infile.read((char*)&num[i], sizeof(int));

    // Get the sum of the digits
    for (int i = 0; i < 10; i++)

        sum[i] = num[i]%10 + num[i]/10%10 + num[i]/100;
    // Compare the sums
    int num_tmp = 0, sum_tmp = 0;
    for (int i = 0; i < 10; i++) // Bubble sort
        for (int j = i + 1; j < 10; j++)
            if (sum[i] < sum[j]) {
                sum_tmp = sum[j]; num_tmp = num[j];
                sum[j] = sum[i]; num[j] = num[i];
                sum[i] = sum_tmp; num[i] = num_tmp;
            }

    // Output the even number
    for (int i = 0; i < 10; i++)
        if (num[i] % 2 == 0)
            cout << num[i] << " ";

    return 0;
}
