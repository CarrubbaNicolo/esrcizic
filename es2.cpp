#include <iostream>
#include <string>
using namespace std;
int main(){
int b,h;
int area;
cout << "inserisci base e altezza";
cin>>b;
cin>>h;
if(b>0 &&h>0){
area = b*h;
cout << "l'area' è" << area;
} 
else{
    cout << "valori errati";

}


}