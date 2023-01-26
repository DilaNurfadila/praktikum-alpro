#include <iostream>
using namespace std;
int main() {
    string nama, ket;
    char kelas;
    int64_t npm;
    int nilai;

    cout << "Masukan nama : ";
    getline(cin >> ws, nama);
    cout << "Masukan NPM : ";
    cin >> npm;
    cout << "Masukan kelas : ";
    cin >> kelas;
    cout << "Masukan nilai : ";
    cin >> nilai;

    if (nilai > 85 && nilai <= 100) {
        ket = "A";
    } else if (nilai > 75 && nilai <= 85) {
        ket = "B";
    } else if (nilai > 60 && nilai <= 75) {
        ket = "C";
    } else {
        ket = "D";
    }

    cout << "\n\nNama Mahasiswa: " << nama << endl;
    cout << "NPM: " << npm << endl;
    cout << "Kelas: " << kelas << endl;
    cout << "Nilai: " << nilai << endl;
    cout << "Keterangan: " << ket << endl;
}