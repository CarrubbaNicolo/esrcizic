#include <iostream>

using namespace std;
int main() {
    int N;
    cout << "Inserisci il numero di dipendenti ";
    cin >> N;
   int totaleStipendi = 0;

    for (int i = 0; i < N; i++) {
        double stipendiob;
        string  tipocontratto;

        cout << "Inserisci lo stipendio base del dipendente: ";
        cin >> stipendiob;
        cout << "Inserisci il tipo di contratto (Tempo pieno, part time, stage): ";
        cin >> tipocontratto;
        
       int aggiunta = 0;

        if ( tipocontratto == "Tempopieno") {
            aggiunta = stipendiob * 0.15; 
        } else if ( tipocontratto == "parttime") {
            aggiunta = stipendiob * 0.10;
        } else if (tipocontratto == "stage") {
            aggiunta = stipendiob * 0.05; 
        }

        double stipendioagg = stipendiob + aggiunta;
        totaleStipendi = totaleStipendi + stipendioagg;
    }

    cout << "il totale stipendi è: " << totaleStipendi << endl;
    
    return 0;

}