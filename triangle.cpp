#include <iostream>
using namespace std;
int main() {
    int tinggi;

    cout << "Masukan tinggi" << endl;
    cin >> tinggi;

    cout << "Pola pertama\n" << endl;
    for(int i=1;i<=tinggi;i++) {
        for (int j=1;j<=i;j++) {
        cout << "*";
        }
        cout << endl;
    }

    cout << "\n\nPola kedua\n" << endl;
    for(int i=1;i<=tinggi;i++) {
        for (int j=tinggi;j>=i;j--) {
        cout << "*";
        }
        cout << endl;
    }

    cout << "\n\nPola ketiga\n" << endl;
    for(int i=1;i<=tinggi;i++) {
        for (int j=1;j<i;j++) {
        cout << " ";
        }
        for (int k = tinggi; k >= i; k--) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\n\nPola keempat\n" << endl;
    for(int i=1;i<=tinggi;i++) {
        for (int j=tinggi;j>i;j--) {
        cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\n\nPola kelima\n" << endl;
    for(int i=1;i<=tinggi;i++) {
        for (int j=tinggi;j>i;j--) {
        cout << " ";
        }
        for (int k = 1; k <= (2*i-1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\n\nPola keenam\n" << endl;
    for(int i=1;i<=tinggi;i++) {
        for (int j=1;j<i;j++) {
        cout << " ";
        }
        for (int k = tinggi; k >= (2*i-tinggi); k--) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\n\nPola ketujuh\n" << endl;
    for(int i=1;i<=tinggi;i++) {
        for (int j=tinggi;j>i;j--) {
        cout << " ";
        }
        for (int k = 1; k <= (2*i-1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    for(int i=2;i<=tinggi;i++) {
        for (int j=1;j<i;j++) {
        cout << " ";
        }
        for (int k = tinggi; k >= (2*i-tinggi); k--) {
            cout << "*";
        }
        cout << endl;
    }
}