//2.	Konversi Suhu. Masukkan suhu Celsius, tampilkan Fahrenheit (F = C × 9/5 + 32) dan Reamur (R = C × 4/5). *Petunjuk:* pakai tipe double; hati-hati 9/5 pada bilangan bulat bernilai 1.

#include <iostream>

using namespace std;

int main() {
    double celsius, fahrenheit, reamur;

    cout << "input suhu celcius: ";
    cin >> celsius;

    fahrenheit = celsius * 9/5 + 32;
    cout << "suhu fahrenheit adalah: " << fahrenheit << endl;

    reamur = celsius * 4/5;
    cout << "suhu reamur adalah: " << reamur << endl;
}



