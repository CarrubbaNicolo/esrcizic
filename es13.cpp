
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int numeroCasuale = rand() % 50 + 1;
    int numeroUtente;
    do {
        cout << "Indovina il numero tra 1 e 50: ";
        cin >> numeroUtente;

        if (numeroUtente > numeroCasuale) {
            cout << "Troppo alto!" << endl;
        } else if (numeroUtente < numeroCasuale) {
            cout << "Troppo basso!" << endl;
        } else {
            cout << "Hai indovinato!" << endl;
        }
    } while (numeroUtente != numeroCasuale);

    return 0;
}