//4.	Tabungan. Saldo awal 1.000.000 (double). Dengan operator penugasan gabungan: tambah gaji 2.500.000 (+=), kurangi belanja 750.000 (-=), lalu beri bunga 5% (*= 1.05). Tampilkan saldo di setiap langkah. *Petunjuk:* pakai fixed << setprecision(2) dari <iomanip>. 

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double saldo = 1000000.00;
    double gaji = 2500000.00;
    double belanja = 750000.00;

    cout << fixed << setprecision(2) << "tambah gaji : " << (saldo += gaji) << endl;
    cout << fixed << setprecision(2) << "saldo saat ini: " << saldo << endl;

    cout << fixed << setprecision(2) << "belanja : " << (saldo -= belanja) << endl;
    cout << fixed << setprecision(2) << "saldo saat ini: " << saldo << endl;

    cout << fixed << setprecision(2) << "kena bunga : " << (saldo *= 1.05) << endl;
    cout << fixed << setprecision(2) << "saldo saat ini: " << saldo << endl;

}