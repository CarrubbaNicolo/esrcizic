#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int n;
    cout << "inserisci la dimensione del vettore: ";
    cin >> n;
    int x[n];
    int molt = 1;
    for(int i  = 0; i <n; i++){
        cout << "inserisci un numero: ";
        cin >> x[i];
        if(x[i] % 2 != 0 ) {
        molt = molt * x[i];
        }
    }
    cout << "Il prodotto degli elementi nelle posizioni dispari è: " << molt
         << endl;
    return 0;
}