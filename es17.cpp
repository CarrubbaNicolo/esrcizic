#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    cout << "i numeri casuali sono" << endl;
    for (int i = 0; i < 10; i++) {
        int numeroCasuale = rand() % 100 + 1;
        if (numeroCasuale % 2 == 0) {
            cout << numeroCasuale << endl;
        }
    }
    return 0;
}
