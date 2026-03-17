#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int x[10];
    int max= 0;
    int posizione = 0;

    for (int i = 0; i < 10; i++) {
        x[i] = rand() % 50 + 1;
        cout << x[i] << " ";
    }

    for (int i = 0; i < 10; i++) {
        if (x[i] > max) {
            max = x[i];
            posizione = i;
        }
    }

    cout << "Il massimo è: " << max << " e si trova in posizione: " << posizione << endl;

    return 0;
}
