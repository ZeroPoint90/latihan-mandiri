#include <iostream> 
using namespace std;

// namespace satu{
//     int q =100;
// }

int main() {
    int x = 10;

    const double pi = 3.14159;
    double radius, area;

    cout << "Masukkan jari-jari lingkaran: ";
    cin >> radius;
    
    area = pi * radius * radius;

    cout << "Nilai area adalah : " << area << endl;
    // cout << "Nilai x di dalam namespace satu: " << satu::q << endl;

    return 0;
}