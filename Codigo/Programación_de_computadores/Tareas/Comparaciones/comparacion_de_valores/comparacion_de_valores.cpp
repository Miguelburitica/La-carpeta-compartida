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
    if (x >= y && y >= z){
        cout<<"Los valores descendentemente son: "<<"\t"<<x<<"\t"<<y<<"\t"<<z;
    }
    else if (x >= z && z >= y){
        cout<<"Los valores descendentemente son: "<<"\t"<<x<<"\t"<<z<<"\t"<<y;
    }
    else if (y >= z && z >= x){
        cout<<"Los valores descendentemente son: "<<"\t"<<y<<"\t"<<z<<"\t"<<x;
    }
    else if (y >= x && x >= z){
        cout<<"Los valores descendentemente son: "<<"\t"<<y<<"\t"<<x<<"\t"<<z;
    }
    else if (z >= x && x >= y){
        cout<<"Los valores descendentemente son: "<<"\t"<<z<<"\t"<<x<<"\t"<<y;
    }
    else if (z >= y && y >= x){
        cout<<"Los valores descendentemente son: "<<"\t"<<z<<"\t"<<y<<"\t"<<x;
    }
}
