#include <iostream>
using namespace std;

void perulangan() {
    // for(int i = 0; i < 10; i++) {
    //     cout<<"Perulangan ke-"<<i<<endl;
    // }

    int i = 0;
    // while(i < 10) {
    //     cout<<"Perulangan ke-"<<i<<endl;
    //     i++;
    // }

    do {
        cout<<"Perulangan ke-"<<i<<endl;
        i++;
    } while(i < 10);
}

int main(){
    perulangan();
}