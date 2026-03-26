#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
int somma = 0;
int prodotto;
int max = 0;
int k;
int i = 0;
int n;
bool a = true;
cout<<"dammi la lunghezza del vettore";
cin>>n;
int x[n];
for(int i  = 0; i <n; i++){
        cout << "inserisci un numero: ";
        cin >> x[i];}

while(a){
cout<<"cosa vuoi fare";
cin>>k;
switch(k){
case 1:
int somma = 0;
for(i=0;i<n;i++){
somma = somma + x[i];}
cout<<"la somma è"+ somma;
break;
case 2:
for(i=0;i<n;i++){
prodotto = prodotto * x[i];}
cout<<"il prodotto è"+ prodotto;
break;
case 3:
for(i=0;i<n;i++){
if(x[i]>max){
    max=x[i];}}
    cout<<"il numero massimo è" +max;
    break;
// default:
a=false;
}
}
}