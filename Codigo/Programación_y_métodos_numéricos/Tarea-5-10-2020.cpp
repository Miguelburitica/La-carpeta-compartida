#include <iostream>
#include <math.h>
#include <iomanip>
#include <cstdlib>
#include <string>

using namespace std;

void leerArreglo(int A[], int n){
    int i = 0;
    int x;
    for(i; i < n; i++){
        cin>>x;
        A[i] = x;
    }
}

void impArr(int n, int A[]){
         for(int i=0; i<n;i++)
                cout<<A[i]<<" , ";
         cout<<endl;
}

bool ComprobadorPrimosBool(int n){
    int cont = 0;
    int i = 1;
    int j = 1;
    int m = 0;
    bool b;
    while(i <= n){
        /*if(i%2 == 0){
            if(i%3 == 0){*/
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
            /*}
            else{
                i++;
            }
        }
        else{
            i++;
        }*/
    }
    if(m == n){
        b = true;
    }
    else{
        b = false;
    }
    return b;
}

void changeBase(int M, int N, int n, int A[6]){
    int i = 0;
    int acumulador = 0;
    int j = 0;
    int digito;
    int resultadoNumerico;
    int resultado;
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

void Mersenne(int n){
    int cont = 1;
    int i = 1;
    int j = 1;
    int m = 0;
    int64_t k;
    bool b;
    int64_t limit = 1000000000;
    cout<<"3, ";
        while(i <= limit){
            if(i%2 != 0){
                while (j <= (i/2)){
                    if(i%j == 0 && cont <= 2){
                        cont++;
                    }
                    j++;
                }
                if(cont == 2){
                     k = pow(2, i) - 1;
                    if(ComprobadorPrimosBool(k)){
                        cout<<k<<", ";
                        m++;
                    }
                }
                cont = 1;
                j = 1;
                i++;
                if(m == n-1){
                    break;
                }
            }
            else{
                i++;
            }
        }
}
void DescomponerNumeros(int n){
    int i = 2;
    while(n > 1){
        if(n%i == 0){
            while(n%i == 0){
                n /= i;
                cout<<i<<endl;
            }
            i++;
        }

        else{
            i++;
        }
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
    else{
        cout<<"El numero "<<A<<" no es divisible por "<<B<<endl;
    }
    int J = B;
    return J;
}

void Interseccion(int A[], int B[], int)

int main(){
    int x, y;
    cin>>x>>y;
    int A[x], B[y];
/*    int64_t M[100000];
    int
    changeBase(6, 5, 55555, M);
    int x;
    cin>>x;
    ComprobadorPrimos(x);*/
    //Mersenne(x);
    //DescomponerNumeros(x);
    //cout<<MCD(x, y)<<endl;
    leerArreglo(A, x);
    leerArreglo(B, y);

}
