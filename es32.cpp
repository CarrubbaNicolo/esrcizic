#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int n;
    int i;
    cout << "inserisci la dimensione del vettore: ";
    cin >> n;
    string x[n];
    for(i  = 0; i < n; i++){
        cout << "inserisci una parola ";
        cin >> x[i];
        if(x[i] == "stop") {
        break;
        }
    }
    cout << "inserisci un numero N ";
    cin >> n;
    cout << "le parole con lunghezza maggiore di N sono ";
    for(i = 0; i < n; i++){
        if(x[i].length() > n) {
            cout << x[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
