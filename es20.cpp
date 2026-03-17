#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "quanti numeri inserisci? ";
    cin >> n;

    double x[n];
    double minimo = x[0];

    for (int i = 0; i < n; i++) {
        cout << "Inserisci il numero " << i + 1 << ": ";
        cin >> x[i];
    }

    for (int i = 0; i < n; i++) {
        if (x[i] < minimo) {
            minimo = x[i];
        }
    }

    cout << "Il numero più piccolo è: " << minimo << endl;

    return 0;
}

