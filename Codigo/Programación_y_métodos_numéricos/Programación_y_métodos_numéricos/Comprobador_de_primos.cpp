#include <iostream>
#include <math.h>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main(){
    int n, A[5];
    cout<<"Ingresa la cantidad de numeros primos que deseas calcular: "<<endl;
    cin>>n;
    cout<<endl;
    int cont = 1;
    int i = 1;
    int j = 1;
    int m = 0;
        while(i <= n){
            if(i%2 != 0){
                while (j <= (i/2)){
                    if(i%j == 0 && cont <= 2){
                        cont++;
                    }
                    j++;
                }
                if(cont == 2){
                    i = A[m];
                    m++;
                }
                cont = 1;
                j = 1;
                i++;
            }
            else{
                i++;
            }
        }
        if(A[i-1] == n){
            cout<<n<<" si es un numero primo"<<endl;
        }
        else{
            cout<<n<<" no es un numero primo"<<endl;
        }
}
