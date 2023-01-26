#include <iostream> // header untuk fungsi cout, cin, dan clog
using namespace std;
int main() {
    // Menyiapkan variable
    string pelayan, customer, askot;
    int64_t harga = 75000, jumlah, total, kembalian, pembayaran;
    char telp[12];

    // Mulai Program
    cout << "======================================================================================\n" << endl;
    cout << "\t\tPembelian Tiket Kereta Reguler Bandung - Jakarta\n" << endl;
    cout << "======================================================================================\n\n" << endl;
    cout << "Masukan nama pelayan\t: ";
    getline(cin >> ws, pelayan); // Memasukan nama pelayan
    cout << "Masukan nama customer\t: ";
    getline(cin >> ws, customer); // Memasukan nama customer
    cout << "Masukan nomor telepon\t: ";
    cin >> telp; // Memasukan nomor telepon
    cout << "Masukan asal kota\t: ";
    getline(cin >> ws, askot); // Memasukan asal kota customer
    cout << "Masukan jumlah tiket\t: ";
    cin >> jumlah; // Memasukan jumlah tiket yang ingin dibeli
    cout << "Masukan pembayaran\t: Rp. ";
    cin >> pembayaran; // Memasukan jumlah uang yang kita bayar

    total = harga * jumlah; // Kalkulasi total harga
    kembalian = pembayaran - total; // Kalkulasi kembalian jika uang lebih

    // Menampilkan data yang sudah di-input
    cout << "\n\nHasil data yang anda masukan adalah sebagai berikut :"<<endl;
    cout << "\nNama Pelayan\t\t: " << pelayan << endl;
    cout << "Nama Customer\t\t: " << customer << endl;
    cout << "No. Telepon\t\t: " << telp << endl;
    cout << "Asal Kota\t\t: " << askot << endl;
    cout << "Harga Tiket\t\t: " << harga << endl;
    cout << "Jumlah Pembelian Tiket\t: " << jumlah << endl;
    cout << "Harga Total\t\t: Rp. " << total << endl;
    cout << "Pembayaran\t\t: Rp. " << pembayaran << endl;
    cout << "Kembalian Anda\t\t: Rp. " << kembalian << endl;
    cout << "\n\nTerima kasih sudah memesan tiket di PT. Kereta Ceria Aja\n" << endl;

    /*
    Note :
    1. \t (tab) berfungsi untuk memberikan indentasi pada teks
    2. \n (newline) berfungsi untuk membuat baris baru
    */
}