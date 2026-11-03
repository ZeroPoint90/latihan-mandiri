#include <iostream>

using namespace std;

int main() {

    double IPK;
    int kehadiran, penghasilan;

    cout << "Masukkan IPK: ";
    cin >> IPK; 

    cout << "Masukkan jumlah kehadiran: ";
    cin >> kehadiran;

    cout << "Masukkan penghasilan orang tua: ";
    cin >> penghasilan;

    if (IPK >= 3.5 && kehadiran >= 80 && penghasilan <= 5000000 || IPK >= 3.80 && kehadiran >= 80 && penghasilan <= 7000000) {
        cout << "Selamat! Anda memenuhi syarat untuk mendapatkan beasiswa." << endl;
    } else
    {
        cout << "Maaf, Anda tidak memenuhi syarat untuk mendapatkan beasiswa." << endl;
    }
    
    return 0;

}