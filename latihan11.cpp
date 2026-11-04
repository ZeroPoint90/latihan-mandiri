#include <iostream>

using namespace std;

int main() {

    double K;
    string Q = "Rp 1.000.000";
    string W = "Rp 2.500.000";
    string E = "Rp 5.000.000";

    cout << "========= Program Penentuan bonus Gaji Karyawan =========" << endl;
    cout << "Masukkan lama bekerja (dalam tahun): ";
    cin >> K;

    if (K < 1.0) {
        cout << "Lama bekerja : " << K << " tahun" << endl;
        cout << "Maaf, Anda tidak mendapatkan bonus." << endl;
    }else if (K <= 2.9){
        cout << "Lama bekerja : " << K << " tahun" << endl;
        cout << "Selamat, Anda mendapatkan bonus sebesar : " << Q << endl;
    }else if (K <= 4.9){
        cout << "Lama bekerja : " << K << " tahun" << endl;
        cout << "Selamat, Anda mendapatkan bonus sebesar : " << W << endl;
    }else if (K >= 5.0){
        cout << "Lama bekerja : " << K << " tahun" << endl;
        cout << "Selamat, Anda mendapatkan bonus sebesar : " << E << endl;
        
    }else {
        cout << "angka apa yang beliau masukkan itu?!" << endl;
    }

    
}