#include <iostream>

int main(){

    int n, i = 1, jumlah = 0;

    std::cout << "Input bilangan n: ";
    std::cin >> n;

    while (i <= n){
        jumlah += i;
        i++;
    }

    std::cout << "Jumlah bilangan adalah...: " << jumlah << "\n";
}