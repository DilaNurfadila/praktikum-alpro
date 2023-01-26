#include <iostream>
using namespace std;
// Nurfadila
// 41155050220032
int main() {
    // A => 250
    // B => 230
    // C => 200
    // D => 175
    // E => < 175
    int speed;

    cout << "Masukan kecepatan" << endl;
    cin >> speed;

    if (speed >= 250) {
        cout << "A" << endl;
    } else if (speed >= 230 && speed < 250) {
        cout << "B" << endl;
    } else if (speed >= 200 && speed < 230) {
        cout << "C" << endl;
    } else if (speed >= 175 && speed < 200) {
        cout << "D" << endl;
    } else {
        cout << "E" << endl;
    }
}