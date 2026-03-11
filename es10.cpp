#include <iostream>
#include <string>
using namespace std;
int main() {
    std::string tipoVeicolo;
    std::string tipoCarburante;
    double km;
    double costo;
     
    cout << "Inserisci il tipo di veicolo (auto/moto): ";
    cin >> tipoVeicolo;

    cout << "Inserisci il tipo di carburante (benzina/diesel/elettrico): ";
    cin >> tipoCarburante;

    cout << "Inserisci i km percorsi: ";
    cin >> km;

    if (tipoVeicolo == "auto") {
        if (tipoCarburante == "benzina") {
            costo = km * 0.15;
        } else if (tipoCarburante == "diesel") {
            costo = km * 0.13;
        } else if (tipoCarburante == "elettrico") {
            costo = km * 0.08;
        }
    } else if (tipoVeicolo == "moto") {
        if (tipoCarburante == "benzina") {
            costo = km * 0.07;
        } else if (tipoCarburante == "elettrico") {
            costo = km * 0.04;
        }
    }

    cout << "Il viaggio costa: " << costo << endl;

    return 0;
}
