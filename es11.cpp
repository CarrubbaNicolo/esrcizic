#include <iostream>

using namespace std;
int main() {
    int N;
    cout << "Inserisci il numero di biglietti: ";
    cin >> N;
   int totaleIncassato = 0;

    for (int i = 0; i < N; i++) {
        double prezzob;
        string  tipocliente;

        cout << "Inserisci il prezzo base del biglietto: ";
        cin >> prezzob;
        cout << "Inserisci il tipo di cliente (Studente, Adulto, Over65): ";
        cin >> tipocliente;

       int sconto = 0;

        if ( tipocliente == "Studente") {
            sconto = prezzob * 0.30; 
        } else if ( tipocliente == "Adulto") {
            sconto = prezzob * 0.05;
        } else if (tipocliente == "Over65") {
            sconto = prezzob * 0.4; 
        }

        double prezzoscontato = prezzob - sconto;
        totaleIncassato = totaleIncassato + prezzoscontato;
    }

    cout << "il totale incassato è: " << totaleIncassato << endl;
    
    return 0;
















}