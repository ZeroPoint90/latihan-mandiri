//1.	Status Nilai. Masukkan nilai ujian (bilangan bulat). Tampilkan (dengan boolalpha): *Lulus?* (≥ 60), *Nilai sempurna?* (= 100), dan *Perlu remedial?* (< 60). 

#include <iostream>
using namespace std;

int main() {

    int Nilai;

    cout << "Masukkan nilai ujian: ";
    cin >> Nilai;

    cout << boolalpha;
    cout << "Lulus? " << (Nilai >= 60) << endl;
    cout << "Nilai sempurna? " << (Nilai == 100) <<endl;
    cout << "Perlu remedial? " << (Nilai < 60) << endl;
}