#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int x[10];
    int somma = 0;
    for (int i = 0; i < 10; i++) {
        x[i] = rand() % 50 + 1;
        cout << x[i] << " ";
    }
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            somma = somma + x[i];
        }
    }
    cout << "La somma degli elementi nelle posizioni pari è: " << somma
            << endl;
    return 0;
}               
