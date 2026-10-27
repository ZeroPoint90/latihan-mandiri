//1.	Kalkulator Mini. Minta pengguna memasukkan dua bilangan bulat, lalu tampilkan hasil penjumlahan, pengurangan, perkalian, pembagian (hasil desimal), dan sisa bagi. 
#include <iostream>

using namespace std;

int main() {

    int a = 20;
    int b = 12;

    cout << "bilangan a: " << a << endl;
    cout << "bilangan b: " << b << endl;
    cout << "===============================" << endl;
    cout << " penjumlahan: " << a + b << endl;
    cout << " pengurangan: " << a - b << endl;
    cout << " perkalian: " << a * b << endl;
    cout << " pembagian: " << (double)a / b << endl;
    cout << " sisa bagi: " << a % b << endl;
    cout << "===============================" << endl;
}