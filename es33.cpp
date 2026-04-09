#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int n = 10;
    int x[n];
    int count = 0;

    for(int i = 0; i < n; i++){
        cout << "inserisci un numero ";
        cin >> x[i];
        if(x[i] % 2 == 0) {
            count++;
        }
    }

    if(count >= 3) {
        cout << "ci sono almeno 3 numeri pari nell array" << endl;
    } else {
        cout << "non ci sono almeno 3 numeri pari nell array" << endl;
    }

    return 0;
}
