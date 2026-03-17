#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int x[10];

    for (int i = 0; i < 10; i++) {
        x[i] = rand() % 50 + 1;
        cout << x[i] << " ";
    }

    cout << " i numeri invertiti sono ";
    for (int i = 9; i >= 0; i--) {
        cout << x[i] << " ";
    }
    cout << endl;

    return 0;
}
