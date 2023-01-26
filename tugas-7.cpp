#include <iostream>
// #include <string>
using namespace std;
    string namamhs[] = {};
    // int n;
    const int MAX_ARRAY = 100;
void NamaMhs(string nama) {
        // cout << "Masukan N : ";
        // cin >> n;

        // for (int i = 0; i < n; i++) {
        //     cout << "Masukan Nama Mahasiswa : ";
        //     cin >> nama;
        //     namamhs[n] = nama;
        //     cout << namamhs[n] << endl;
        // }

        namamhs[MAX_ARRAY] = nama;
        cout << namamhs[MAX_ARRAY] << endl;
    }

// void hasil() {}
int main() {
    NamaMhs("Nurfadila");
    NamaMhs("Indiyani");
    NamaMhs("Bintang");
    NamaMhs("Lara");
    NamaMhs("Febby");
    NamaMhs("Radinda");
    NamaMhs("Putri");
    NamaMhs("Dieka");
}