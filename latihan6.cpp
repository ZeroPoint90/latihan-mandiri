//3.	Konversi Detik. Masukkan total detik, tampilkan dalam format *jam, menit, detik*

#include <iostream>
using namespace std;

int main() {

    int Detik, Jam, Menit, SisaDetik, sisaDetik;

    cout << "input detik : ";
    cin >> Detik;   

    Jam = Detik / 3600;
    sisaDetik = Detik % 3600;
    Menit = sisaDetik / 60;
    SisaDetik = sisaDetik % 60;

    cout << "Hasil konversi: " << Jam << " jam, " << Menit << " menit, " << SisaDetik << " detik" << endl;

    return 0;
}