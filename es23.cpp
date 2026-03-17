#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int x[12];
    int numero;

    for (int i = 0; i < 12; i++) {
        x[i] = rand() % 50 + 1;
        cout << x[i] << " ";
    }

    cout << "inserisci il numero da cercare";
    cin >> numero;

    bool trovato = false;
    for (int i = 0; i < 12; i++) {
        if (x[i] == numero) {
            cout << "Il numero " << numero << "è nella posizione " << i << endl;
            trovato = true;
            break;
        }
    }

    if (!trovato) {
        cout << "Il numero " << numero << " non è stato trovato nel vettore." << endl;
    }

    return 0;
}
