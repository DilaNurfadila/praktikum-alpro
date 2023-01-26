#include <iostream>
using namespace std;

int nilaiterbesar = 0;
int nilaiterkecil = 100;

void cari(int a) {
    if (nilaiterbesar < a) {
        nilaiterbesar = a;
    } else if (nilaiterkecil > a) {
        nilaiterkecil = a;
    }
}

void print() {
    cout << "Nilai terbesar : " << nilaiterbesar << endl;
    cout << "Nilai terkecil : " << nilaiterkecil << endl;
}
int main(){
    cari(9);
    cari(50);
    cari(4);
    cari(71);
    print();
}