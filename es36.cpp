#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int n; 
    cout << "inserisci la dimensione del vettore ";
cin >> n;
    int x[n];
    int i = 0;


    for(i  = 0; i <n; i++){
        cout << "inserisci un numero";
        cin >> x[i];
    
        x[i] = i;
        }

        cout << x[i];
    }
