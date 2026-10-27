#include <iostream>

using namespace std;

int main() {

    int a;
    int b;
    int c;
    int RataRata;

    a = 0;
    b = 1;
    RataRata = 0;

    while(b <= 10) {
        cout << "masukkan nilai c: ";
        cin >> c;
        a = a + c;
        b = b + 1;
    }
    RataRata = a / 10;
    cout << "Rata-rata: " << RataRata << endl;
}