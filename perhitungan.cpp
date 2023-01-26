#include <iostream>
using namespace std;
int main() {
    int a, b, total;
    float c, d, total2;
    float hasil = 3;

    cout<<"Masukkan bilangan integer 1 : "; cin >> a;
    cout<<"Masukkan bilangan integer 2 : "; cin >> b;
    cout<<"Masukkan bilangan float 3 : "; cin >> c;
    cout<<"Masukkan bilangan float 4 : "; cin >> d;

    // Penjumlahan
    total = a + b;
    // hasil = hasil + total;
    cout<< a <<" + "<< b <<" = "<< total <<endl;
    // cout <<"Hasil : " << hasil << endl;
    total2 = a + d;
    hasil = total + total2 + hasil;
    cout<< a <<" + "<< d <<" = "<< total2 << endl;
    cout <<"Hasil : " << hasil << endl;

    // Pengurangan
    total = a - b;
    // hasil = hasil + total;
    cout<< a <<" - "<< b <<" = "<< total <<endl;
    // cout <<"Hasil : " << hasil << endl;
    total2 = a - d;
    hasil = total + total2 + hasil;
    cout<< a <<" - "<< d <<" = "<< total2 <<endl;
    cout <<"Hasil : " << hasil << endl;

    // Perkalian
    total = a * b;
    // hasil = hasil + total;
    cout<< a <<" x "<< b <<" = "<< total <<endl;
    // cout <<"Hasil : " << hasil << endl;
    total2 = b * c;
    hasil = total + total2 + hasil;
    cout<< b <<" x "<< c <<" = "<< total2 <<endl;
    cout <<"Hasil : " << hasil << endl;

    // Pembagian
    total = a / b;
    // hasil = hasil + total;
    cout<< a <<" : "<< b <<" = "<< total <<endl;
    // cout <<"Hasil : " << hasil << endl;
    total2 = b / c;
    hasil = total + total2 + hasil;
    cout<< b <<" : "<< c <<" = "<< total2 <<endl;
    cout <<"Hasil : " << hasil << endl;

    // Modulus / sisa bagi
    total = a % b;
    cout<< a <<" % "<< b <<" = "<< total <<endl;
    hasil = total + hasil;
    cout <<"Hasil : " << hasil << endl;


    // int total = 5 + 9 - 3 / 2 * 8;
    // cout << total;
}