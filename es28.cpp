#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int x[10];
    for (int i = 0; i < 10; i++) {
        x[i] = rand() % 10 + 1;
        
    }
    cout<<"Il vettore inziale è";
     for (int i = 0; i < 10; i++) {

    cout << x[i];
        }
    for (int i = 0; i < 10; i++) {
        if (x[i] % 2 == 0) {
            x[i]=0;
        }
    }
        cout<<"Il vettore finale è";

        for (int i = 0; i < 10; i++) {

    cout << x[i];
        }
    return 0;
}               