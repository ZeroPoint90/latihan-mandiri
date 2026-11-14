#include <iostream>

int main(){

    int baris, kolom;
    char simbol;

    std::cout << "input jumlah baris: ";
    std::cin >> baris;

    std::cout << "input jumlah kolom: ";
    std::cin >> kolom;

    std::cout << "input simbol: ";
    std::cin >> simbol;

    for (int i = 1; i <= baris; i++){
        std::cout << "=";
    }std::cout << "\n"; //harus taro diluar biar ganti baris

    for (int i = 1; i <= baris; i++){
        std::cout << "|";
        for (int j = 1; j <= kolom; j++){
            std::cout << simbol;
        }
        std::cout << "|\n";
    }

    for (int i = 1; i <= baris; i++){
        std::cout << "=";
    }
    std::cout << "\n"; //sama kayak di line 19

}