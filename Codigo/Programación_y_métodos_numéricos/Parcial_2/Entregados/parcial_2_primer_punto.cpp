#include <iostream>
#include <math.h>
#include <iomanip>
#include <cstdlib>
#include <string>

using namespace std;

bool ComprobadorPrimosBool(int n){
    int cont = 0;
    int i = 1;
    int j = 1;
    int m = 0;
    bool b;
    while(i <= n){
        while(j <= i){
            if(i%j == 0 && cont <= 2){
                cont++;
            }
            j++;
        }
        if(cont == 2){
            m = i;
        }
        cont = 0;
        j = 1;
        i++;
    }
    if(m == n){
        b = true;
    }
    else{
        b = false;
    }
    return b;
}

int contadoraDigitos(int n){
    int contador = 0;
    while(n > 0){
        n /= 10;
        contador++;
    }
    return contador;
}

void changeBase(int M, int N, int n, int k, int A[]){
    int i = 0;
    A[k];
    int acumulador = 0;
    int j = 0;
    while(n > 0){
        A[i] = n%10;
        i++;
        n /= 10;
    }
    i -= 1;
    while(i >= 0){
        acumulador = A[i]*pow(M, i) + acumulador;
        i--;
    }
    while(acumulador > 0){
        A[j] = acumulador%N;
        j++;
        acumulador /= N;
    }
    j -= 1;
    while(j >= 0){
        cout<<A[j];
        j--;
    }
}

int MCD(int A, int B){
    int C = B;
    int x;
    int K;
    if(A > B){
        while(C != 0){
            K = C;
            C = A % B;
            B = C;
        }
        return K;
    }
    else if(B > A){
        while(C != 0){
            K = C;
            C = B % A;
            A = C;
        }
        return K;
    }
    else{
        return A;
    }
}

int main(){
    int a, b, c, d;
    cout<<"Ingresa el primer valor: ";
    cin>>a;
    cout<<endl;
    cout<<"Ingresa el segundo valor: ";
    cin>>b;
    cout<<endl;
    if(b != 0){
        if(a >= b){
            c = MCD(a, b);
            if(ComprobadorPrimosBool(c)){
                int x = contadoraDigitos(c);
                int A[x];
                int i = 2;
                    while(i < 10){
                        cout<<"El numero "<<c<<" en base "<<i<<" es: ";
                        changeBase(10, i, c, x, A);
                        cout<<endl;
                        i++;
                    }
            }
            else{
                cout<<"El maximo comun divisor es: "<<c<<" pero no es un numero primo"<<endl;
            }
        }
        else{
            cout<<"El numero "<<a<<" es menor que "<<b<<" vuelve a intentar"<<endl;
        }
    }
    else{
        cout<<"El valor que divide, debe ser mayor que 0"<<endl;
    }
}
