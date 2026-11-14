#include <iostream>

int main() {

    int A, B, C;

    std::cout << "Masukkan nilai A: ";
    std::cin >> A;

    std::cout << "Masukkan nilai B: ";
    std::cin >> B;

    std::cout << "Masukkan nilai C: ";
    std::cin >> C;

    // if(A > B) //perbandingan pertama antara A dan B
    // {
    //     std::cout << "A lebih besar B" << std::endl;
    // } else {
    //     std::cout << "A lebih kecil dari B" << std::endl;
    // }

    // if (A > C || B > C) //memeriksa apakah A atau B lebih besar dari C
    // {
    //     std::cout << "A/B lebih besar dari C \n";  
    // } else {
    //     std::cout << "A/B lebih kecil dari C \n";
    // }
    
    
    /*
     yang atas salah jir lol
    */ 

    if ( A >= B && A >= C){
        std::cout << "A adalah bilangan terbesar \n";
    } else if ( A <= B && B >= C){
        std::cout << "B adalah bilangan terbesar \n";
    } else {
        std::cout << "C adalah bilangan terbesar \n";
    }
}