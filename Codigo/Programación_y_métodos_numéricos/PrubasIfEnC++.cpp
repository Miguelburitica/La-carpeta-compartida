#include <iostream>

using namespace std;

int main() {
    cout<<"Ingresa tu numero: "<<endl;
    int64_t x;
    cin>>x;
    if (x%2==0) {
        cout<<"Es un numero par"<<endl;
    }
    else {
        cout<<"Es un numero impar"<<endl;
    }

    int numero;
    cout<<"Ingrese su numero: "<<endl;
    cin>>numero;
    if(numero<0){
        cout<<"Su numero es negativo"<<endl;
    }
    else if(numero>0){
        cout<<"Su numero es positivo"<<endl;
    }
    else{
        cout<<"Su numero es cero"<<endl;
}
    int r;
    cout<<"Ingresar edad a evaluar: "<<endl;
    cin>>r;
    switch(r){
        case 0: cout<<"Es un sujeto bebe"<<endl;
            break;
        case 1: cout<<"Es un sujeto bebe"<<endl;
            break;
        case 2: cout<<"Es un sujeto bebe"<<endl;
            break;
        case 3: cout<<"Es un sujeto bebe"<<endl;
            break;
        case 4: cout<<"Es un sujeto bebe"<<endl;
            break;
        case 5: cout<<"Es un sujeto bebe"<<endl;
            break;
        case 6: cout<<"Es un sujeto niñe"<<endl;
            break;
        case 7: cout<<"Es un sujeto niñe"<<endl;
            break;
        case 8: cout<<"Es un sujeto niñe"<<endl;
            break;
        case 9: cout<<"Es un sujeto niñe"<<endl;
            break;
        case 10: cout<<"Es un sujeto niñe"<<endl;
            break;
        case 11: cout<<"Es un sujeto niñe"<<endl;
            break;
        case 12: cout<<"Es un sujeto niñe"<<endl;
            break;
        case 13: cout<<"Es un sujeto preadolecente"<<endl;
            break;
        case 14: cout<<"Es un sujeto preadolecente"<<endl;
            break;
        case 15: cout<<"Es un sujeto adolecente"<<endl;
            break;

        default : cout<<"Estudia o trabaja, es hora de ser alguien util"<<endl;
    }
    int64_t a;
    cout<<"Ingresa tu edad"<<endl;
    cin>>a;
    while (a<23){
        a++;
    }
    cout<<"Eres un prieto de: "<<a<<"anios"<<endl;
}
