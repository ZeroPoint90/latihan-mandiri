#include <iostream>
using namespace std;
int main() {

    for (int p = 1; p <= 3; p++) {
        for (int o = 1; o <= p; o++) {
            cout << o;
        }
        cout << endl;
    }
}