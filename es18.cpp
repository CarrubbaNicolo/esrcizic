
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double n;
    cout << "Inserisci un numero: ";
    cin >> n;
    if (n >= 0) {
        cout << "la radice è = " << sqrt(n) << endl;
    } else {
        cout << "Numero non valido" << endl;
    }
    return 0;
}
