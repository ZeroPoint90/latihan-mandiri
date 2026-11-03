#include <iostream>

using namespace std;

int main() {
    int PIN, percobaan = 1;


    do { cout << "Masukkan PIN Anda: ";
         cin >> PIN;
         cout << "Percobaan ke-" << percobaan << endl;

         if (PIN == 1234 && percobaan <= 3) {
             cout << "PIN yang Anda masukkan benar. Akses diterima." << endl;
         } else if (PIN != 1234 && percobaan < 3) {
            cout << "PIN yang Anda masukkan salah. Silakan coba lagi." << endl;
         } else {
            cout << "Anda telah mencoba 3 kali. Akses ditolak." << endl;
         }
        percobaan++;
    } while (PIN != 1234 && percobaan <= 3);
    return 0;
}