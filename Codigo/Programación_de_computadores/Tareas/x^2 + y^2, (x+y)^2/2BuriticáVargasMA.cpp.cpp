#include <iostream>

using namespace std;

int main() {
    cout<<"By Miguel A. Buriticá V."<<endl;

    cout<<"Programa calculador de sumas de cuadrados y sumas al cuadrado"<<endl;

    cout<<"Ingrese el primer número: ";
    double x;
    cin>>x;
    double xe2 = x*x;
    cout<<"Ingrese el segundo número: ";
    double y;
    cin>>y;
    double ye2 = y*y;
    double Suma_de_cuadrados = xe2+ye2;
    cout<<"La suma del primer numero al cuadrado con el segundo numero al cuadrado es: "<<Suma_de_cuadrados<<endl;
    double xsy = x+y;
    double Suma_al_cuadrado = xsy*xsy;
    cout<<"El cuadrado de la suma del primer valor con el segundo valor es: "<<Suma_al_cuadrado<<endl;
}

