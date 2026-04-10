#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
int n; 
int interi = 0;
int negativi = 0;


while(interi>=negativi){    
cout << "inserisci un numero";
cin >> n;
if(n < 0) {
    negativi++;
} else {
    interi++;
}
}
}
