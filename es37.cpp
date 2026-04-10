#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
     int n = 8;
    int i;
    int x[n];
    int somma = 0;
    for(int i  = 0; i <n; i++){
        cout << "inserisci un numero: ";
        cin >> x[i];
        cout << x[i];}
     for(int i  = 0; i <n; i++){
        if(x[i]<0){
            somma = somma + x[i];
            x[i] = 0;
        }
        cout<< x[i];
    }
    cout << "la somma dei numeri negativi è " << somma;
    return 0;
}

 