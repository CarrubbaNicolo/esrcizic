
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0)); 
    int numeroCasuale = rand() % 100 + 1; 
    int tentativi = 5;
    int tentativoUtente;
    cout << "Indovina il numero tra 1 e 100. Hai " << tentativi << " tentativi." << endl;
    for (int i = 0; i < tentativi; i++) {
        cout << "Tentativo " << (i + 1) << ": ";
        cin >> tentativoUtente;
        if (tentativoUtente == numeroCasuale) {
            cout << "Hai vinto!" << endl;
            return 0;
        } else if (tentativoUtente < numeroCasuale) {
            cout << "Troppo basso!" << endl;
        } else {
            cout << "Troppo alto!" << endl;
        }
    }
    cout << "Hai perso, il numero era " << numeroCasuale  << endl;
    return 0;
}
