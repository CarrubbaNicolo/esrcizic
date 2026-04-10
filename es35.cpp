#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int n;
    int n1;
    while(n1<=5000){ 
      cout << "inserisci un numero";
        cin >> n;
        n1 = n * n;
        if(n1 > 5000) {
            break;
        } else {
            continue;
        }
    }
    return 0;
}
