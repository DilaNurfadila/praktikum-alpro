#include <iostream>
using namespace std;
int main() {
    int nilai;
    cout<<"Masukan nilai kamu : ";
    cin>>nilai;
    if(nilai <= 60) {
        cout<<"Nilai kamu : D";
    } else if (nilai <= 75) {
        cout<<"Nilai kamu : C";
    } else if (nilai >= 80) {
        cout<<"Nilai kamu : B";
    } else if (nilai >= 90) {
        cout<<"Nilai kamu : A";
    }
}