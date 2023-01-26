#include <iostream>
using namespace std;
int main() {
    string nama, nama_lengkap;
    int npm;
    float ipk;
    char predikat;

    cout << "Nama Lengkap : ";
    getline(cin >> ws, nama_lengkap);
    cout << "Nama Panggilan : ";
    cin >> nama;
    cout << "NPM : ";
    cin >> npm;
    cout << "IPK : ";
    cin >> ipk;
    cout << "Predikat : ";
    cin >> predikat;

    cout << "\n\nNama Panggilan : " << nama << endl;
    cout << "Nama Lengkap : " << nama_lengkap << endl;
    cout << "NPM : " << npm << endl;
    cout << "IPK : " << ipk << endl;
    cout << "Predikat : " << predikat << endl;
}