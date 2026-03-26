#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
int main() {
    srand(time(0));
    string nomiPossibili[5] = {"Luca", "Anna", "Marco", "Sara", "Paolo"};
    string x[10];
    for (int i = 0; i < 10; i++) {
        x[i] = nomiPossibili[rand() % 5];
        cout << x[i] << " ";
    }
    cout << endl;
    int posizioneAnna = -1;
    for (int i = 0; i < 10; i++) {
        if (x[i] == "Anna") {
            posizioneAnna = i;
            break;
        }
    }
    if (posizioneAnna != -1) {
        cout << "Anna si trova nella posizione: " << posizioneAnna << endl;
    } else {
        cout << "Anna non è presente nel vettore." << endl;

    }
    return 0;
}


