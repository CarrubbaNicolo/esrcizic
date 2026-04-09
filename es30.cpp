

#include <iostream>
using namespace std;
int main() {
    int n;
    bool a = true;
    cout<<"inserisci un numero ";
    cin>>n;
    int x = n;
    while(n!=0){
        if(n!=x){
            a=false;
        }
        cout<<"inserisci un numero: ";
        cin>>n;
    }
    if(a){
        cout<<"tutti i numeri sono uguali";
    }else{
        cout<<"i numeri sono diversi";
    }
}


