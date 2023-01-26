#include <iostream> // header untuk fungsi cout, cin, dan clog
using namespace std;
int main() {
    // Menyiapkan variable
    string pelayan, customer, askot, jt;
    int64_t harga, jumlah, total, kembalian, pembayaran, jenis_tiket;
    char telp[12];

    // Mulai Program
    cout << "======================================================================================\n" << endl;
    cout << "\t\tPembelian Tiket Kereta Bandung - Jakarta\n" << endl;
    cout << "======================================================================================\n\n" << endl;
    cout << "Masukan nama pelayan\t: ";
    getline(cin >> ws, pelayan); // Memasukan nama pelayan
    cout << "Masukan nama customer\t: ";
    getline(cin >> ws, customer); // Memasukan nama customer
    cout << "Masukan nomor telepon\t: ";
    cin >> telp; // Memasukan nomor telepon
    cout << "Masukan asal kota\t: ";
    getline(cin >> ws, askot); // Memasukan asal kota customer
    cout << "Pilih jenis tiket : (Pilih angka)";
    cout << "\n1. Reguler\n2. Ekonomi\n3. VIP\n";
    cin >> jenis_tiket;
    switch (jenis_tiket)
    {
    case 1:
        harga = 75000;
        jt = "Reguler";
        break;
    case 2:
        harga = 50000;
        jt = "Ekonomi";
        break;
    case 3:
        harga = 100000;
        jt = "VIP";
        break;
    default:
        cout << "Jenis tiket tidak tersedia";
        break;
    }
    cout << "Masukan jumlah tiket\t: ";
    cin >> jumlah; // Memasukan jumlah tiket yang ingin dibeli
    cout << "Masukan pembayaran\t: Rp. ";
    cin >> pembayaran; // Memasukan jumlah uang yang kita bayar

    total = harga * jumlah; // Kalkulasi total harga
    kembalian = pembayaran - total; // Kalkulasi kembalian jika uang lebih

    if (pembayaran < total) {
        cout << "Maaf, pembayaran anda kurang" << endl;
    } else {
        // Menampilkan data yang sudah di-input
        cout << "\n\nHasil data yang anda masukan adalah sebagai berikut :"<<endl;
        cout << "\nNama Pelayan\t\t: " << pelayan << endl;
        cout << "Nama Customer\t\t: " << customer << endl;
        cout << "No. Telepon\t\t: " << telp << endl;
        cout << "Asal Kota\t\t: " << askot << endl;
        cout << "Jenis Tiket\t\t: " << jt << endl;
        cout << "Harga Tiket\t\t: " << harga << endl;
        cout << "Jumlah Pembelian Tiket\t: " << jumlah << endl;
        cout << "Harga Total\t\t: Rp. " << total << endl;
        cout << "Pembayaran\t\t: Rp. " << pembayaran << endl;
        cout << "Kembalian Anda\t\t: Rp. " << kembalian << endl;
        cout << "\n\nTerima kasih sudah memesan tiket di PT. Kereta Ceria Aja\n" << endl;
    }

    /*
    Note :
    1. \t (tab) berfungsi untuk memberikan indentasi pada teks
    2. \n (newline) berfungsi untuk membuat baris baru
    3. Jenis tiket reguler, ekonomi, vip
    */
}