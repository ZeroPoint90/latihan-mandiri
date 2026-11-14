#include <iostream>

int main(){

    int N;

    std::cout << "Input Nilai mahasiswa: ";
    std::cin >> N;

    if( N >= 70){
        std::cout << "Selamat, Anda Lulus \n";
    } else {
        std::cout << "Maaf, Anda Tidak Lulus \n";
    }
}