#include <iostream>
using namespace std;

int main() {
    int codiceErrore;
    int tentativi = 0;
     int tentativimax = 3;

    while (tentativi < tentativimax) {
        cout << "Inserisci il codice errore ";
        cin >> codiceErrore;

        switch (codiceErrore) {
            case 400:
                cout << "Bad Request" << endl;
                break;
            case 401:
                cout << "Unauthorized" << endl;
                break;
            case 403:
                cout << "Forbidden" << endl;
                break;
            case 404:
                cout << "Not Found" << endl;
                break;
            case 200:
                cout << "Corretto" << endl;
                break;
            default:
                cout << "Errore sconosciuto" << endl;
                break;
        }

        if (codiceErrore != 200) {
            tentativi++;
        } else {
            tentativi = 0; 
        }
    }
    if (tentativi >= tentativimax) {
        cout << "Hai superato il numero massimo di tentativi. Uscita dal programma." << endl;
    }

    return 0;
}
