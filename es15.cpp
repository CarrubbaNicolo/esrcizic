#include <iostream>
using namespace std;

int main() {
    double prezzo, sconto, prezzofinale;
    
    do {
        cout << "Inserisci il prezzo originale  ";
        cin >> prezzo;
        
        if (prezzo != 0) {
            cout << "Inserisci la percentuale di sconto: ";
            cin >> sconto;
            
            prezzofinale = prezzo - (prezzo * sconto / 100);
            cout << "Il prezzo finale è: " << prezzofinale << endl;
        }
    } while (prezzo != 0);
    
    return 0;
}
