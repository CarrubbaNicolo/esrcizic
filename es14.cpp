#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
int n; 
int somma = 0;
double media;
int min = 9999999;
int max = 0;
int conta=0;
std::cout<<"inserisci un numero: ";
std::cin>>n;
while(n != 0){
if(n < min){
    min = n;}
if(n > max){
    max = n;}
somma = somma + n;
conta++;

std::cout<<"inserisci un numero: ";
std::cin>>n;
}
media = somma / conta;
std::cout<<"la somma è: "<<somma<<std::endl;
std::cout<<"la media è: "<<media<<std::endl;
std::cout<<"il numero più piccolo è: "<<min<<std::endl;
std::cout<<"il numero più grande è: "<<max<<std::endl;
}