#include <iostream>
using namespace std;
int main() {
    const int MAX_ARRAY = 10;
    string input;
    string matkul[] = {"Alpro", "Hukpol", "KBPD"};
    string matkul1[10];
    matkul1[0] = "Pancasila";
    matkul1[1] = "Kewarganegaraan";
    matkul1[2] = "Orkom";

    for(int i = 0; i < MAX_ARRAY; i++) {
        cin >> input;
        matkul1[i] = input;
    }

    for(int i = 0; i < 3; i++) {
        cout << matkul[i] << " ";
        cout <<  matkul1[i] << endl;
    }
}