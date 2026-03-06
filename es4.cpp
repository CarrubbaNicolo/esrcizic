//·  Chiedi all’utente un numero n e calcola n! Esempio: 5!=5*4*3*2*1=120
#include <iostream>
#include <string>
using namespace std;
int main(){
int n,a;
int i = 1;
int prodotto;
cout<<"inserisci un numero";
cin>>a;
while(i<=n){
prodotto = n*i;
i= i+1;
}
cout<<prodotto;
}
