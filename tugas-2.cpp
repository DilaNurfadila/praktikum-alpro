#include <iostream>
using namespace std;
int main() {
    int a, b;
    bool hasil;

    cout << "Masukan nilai a : "; cin >> a;
    cout << "Masukan nilai b : "; cin >> b;

    cout << "Nilai a : " << a << endl;
    cout << "Nilai b : " << b << endl;

    hasil = a == b;
    cout << "\n\nPerbandingan " << a << " sama dengan " << b << " : " << hasil << endl;

    hasil = a != b;
    cout << "Perbandingan " << a << " tidak sama dengan " << b << " : " << hasil << endl;

    hasil = a < b;
    cout << "Perbandingan " << a << " kurang dari " << b << " : " << hasil << endl;

    hasil = a > b;
    cout << "Perbandingan " << a << " lebih dari " << b << " : " << hasil << endl;

    hasil = a >= b;
    cout << "Perbandingan " << a << " lebih dari sama dengan " << b << " : " << hasil << endl;

    hasil = a <= b;
    cout << "Perbandingan " << a << " kurang dari sama dengan " << b << " : " << hasil << endl;
}