#include <iostream>

using namespace std;
int main(){

    int K;
    int Z, X, Y;

    cout << "========= Percobaan switch-case + if, if-else-if, dll =========" << endl;
    cout << "Masukkan nilai K: ";
    cin >> K;
    cout << "Masukkan nilai Z: ";
    cin >> Z;
    cout << "Masukkan nilai X: ";
    cin >> X;
    cout << "Masukkan nilai Y: ";
    cin >> Y;

    switch (K){
        case 1 : cout << "penjumlahan Z + X + Y = " << Z + X + Y << endl; break;
        case 2 : cout << "pengurangan Z - X - Y = " << Z - X - Y << endl; break;
        case 3 : cout << "perkalian Z * X * Y = " << Z * X * Y << endl; break;
        case 4 : cout << "pembagian Z / X / Y = " << Z / X / Y << endl; break;
        default : cout << "Lu pantek bang, baca kodenya bang " << endl; break;
    }
    
    if (Z + X + Y > 100){
        cout << "uhh... gede bener hasilnya" << endl;
    } else if (Z + X + Y < 100){
        cout << "uhh... kecil bener hasilnya" << endl;
    } else if (Z + X + Y == 100){
        cout << "uhh... hasilnya pas di angka 100" << endl;
    }


    if (K == 1){
        cout << "Anda memilih penjumlahan" << endl;
    }else if (K == 2){
        cout << "Anda memilih pengurangan" << endl;
    }else if (K == 3){
        cout << "Anda memilih perkalian" << endl;
    }else if (K == 4){
        cout << "Anda memilih pembagian" << endl;
    }

    return 0;
}