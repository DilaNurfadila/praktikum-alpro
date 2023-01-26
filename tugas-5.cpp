#include <iostream>
using namespace std;
int main() {
    // int nilaia, nilaib, nilaic, nilaid, nilaie = 0;
    // int tugas, quiz, uts, uas, n;
    // float nilaiakhir;

    // cout << "Masukan jumlah mahasiswa : ";
    // cin >> n;
    // cout << "Masukan nilai tugas : ";
    // cin >> tugas;
    // cout << "Masukan nilai quiz : ";
    // cin >> quiz;
    // cout << "Masukan nilai uts : ";
    // cin >> uts;
    // cout << "Masukan nilai uas : ";
    // cin >> uas;

    // nilaiakhir = ((tugas * 20)/100) + ((quiz * 20)/100) + ((uts * 30)/100) + ((uas * 30)/100);

    // for(int i = 0; i >= n; i++) {
    //     if (nilaiakhir >= 80) {
    //         nilaia++;
    //     } else if (nilaiakhir >= 68) {
    //         nilaib++;
    //     } else if (nilaiakhir >= 55) {
    //         nilaic++;
    //     } else if (nilaiakhir >= 45) {
    //         nilaid++;
    //     } else {
    //         nilaie++;
    //     }
    // }
    
    // cout << nilaia << endl;
    // cout << nilaib << endl;
    // cout << nilaic << endl;
    // cout << nilaid << endl;
    // cout << nilaie << endl;

    int umur19 = 0, umur20 = 0, umur21 = 0, umurlain = 0;
    int n, umur;

    cout << "Masukan jumlah mahasiswa : ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cout << "Masukan umur : " << endl;
        cin >> umur;
        if (umur == 19) {
            umur19++;
        } else if (umur == 20) {
            umur20++;
        } else if (umur == 21) {
            umur21++;
        } else {
            umurlain++;
        }
    }
    
    cout << "Jumlah umur 19 : " << umur19 << endl;
    cout << "Jumlah umur 20 : " <<  umur20 << endl;
    cout << "Jumlah umur 21 : " <<  umur21 << endl;
    cout << "Jumlah umur lain : " <<  umurlain << endl;
}