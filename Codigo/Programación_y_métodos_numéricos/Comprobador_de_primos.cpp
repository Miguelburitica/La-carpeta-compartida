#include <iostream>
#include <math.h>
#include <iomanip>
#include <cstdlib>

using namespace std;

bool comprobadorPrimo(int p){
    int i = 1, cont = 0;
    bool m = false;
    while(i <= p){
        if(p%i == 0){
            cont++;
        }
        i++;
    }
    if(cont == 2){
        m = true;
    }
    return m;
}

int main(){
    int64_t x;
    cout<<"Ingres ael valor a evaluar: ";
    cin>>x;
    if(comprobadorPrimo(x)){
        cout<<"\n \t \t"<<x<<" si es un numero primo."<<endl;
    }
    else{
        cout<<"\n \t \t"<<x<<" no es un numero primo."<<endl;
    }
}
