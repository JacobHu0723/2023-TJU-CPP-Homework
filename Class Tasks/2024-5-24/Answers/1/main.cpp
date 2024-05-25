#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    //Create a file and write in
    ofstream ofile("1.txt");
    if (!ofile.is_open()) {
        cerr << "Can't open the file!" << endl;
        return 1;
    }
    ofile << "Hello world!" << endl;
    ofile.close();

    //Read the file and print out
    ifstream ifile("1.txt");
    string line;
    if (ifile.is_open()) {
        while (getline(ifile, line))
            cout << line;
    }
    else {
        cerr << "Can't open the file!" << endl;
        return 1;
    }
    ifile.close();

    return 0;
}
