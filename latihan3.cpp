//Tuliskan bentuk biner 8 bit dari 25 dan 9, lalu hitung 25 & 9, 25 | 9, 25 ^ 9, 25 << 2, dan 9 >> 1.

#include <iostream>
#include <bitset>

using namespace std;

int main() {

    int a = 25;
    int b = 9;

    cout << "Bentuk biner 8 bit dari 25: " << bitset<8>(a) << endl;
    cout << "Bentuk biner 8 bit dari 9: " << bitset<8>(b) << endl;
    cout << "25 & 9: " << bitset<8>(a & b) << endl;
    cout << "25 | 9 = " << bitset<8>(a | b) << "\n";
    cout << "25 ^ 9 = " << bitset<8>(a ^ b) << "\n";
    cout << "25 << 2 = " << bitset<8>(a << 2) << "\n";
    cout << "9 >> 1 = " << bitset<8>(b >> 1) << "\n";
}