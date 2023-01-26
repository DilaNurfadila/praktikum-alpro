#include <iostream>
using namespace std;
int main() {
    int bb;
    cout<<"Masukkan berat badan : ";
    cin>>bb;
    if(bb > 30 && bb <= 40) {
        cout<<"Ukuran jasnya M";
    } else if(bb > 40 && bb <= 50) {
        cout<<"Ukuran jasnya L";
    } else if(bb > 50 && bb <= 60) {
        cout << "ukuran jasnya XL";
    } else {
        cout << "Isi data baru";
    }
}