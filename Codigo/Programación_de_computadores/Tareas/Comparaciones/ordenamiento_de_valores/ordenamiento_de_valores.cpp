#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int x;
    int y;
    int z;
    cout<<"Ingresa tu primer valor: ";
    cin>>x;
    cout<<"Ingresa tu segundo valor: ";
    cin>>y;
    cout<<"Ingresa tu tercer valor: ";
    cin>>z;
    if (x>=y && x>=z){
        cout<<"Tu mayor valor es: "<<x;
    }
    else if (y>=x && y>=z){
        cout<<"Tu mayor valor es: "<<y;
    }
    else {
        cout<<"Tu mayor valor es: "<<z;
    }
}
