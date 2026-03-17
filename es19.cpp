#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "dimmi quanti numeri vuoi inserire: ";
    cin >> n;
    double x[n];
    double somma = 0;

    for (int i = 0; i < n; i++) {
        cout << "Inserisci il numero " << i + 1 ;
        cin >> x[i];
        somma = somma + x[i];
    }
    double media = somma / n;
    cout << "La media dei numeri inseriti è: " << media << endl;
    return 0;
}