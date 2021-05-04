#include <iostream>
#include <math.h>
#include <iomanip>
#include <cstdlib>

using namespace std;


int main(){
    int n;
    cout<<"Ingresa la cantidad de numeros primos que deseas calcular: "<<endl;
    cin>>n;
    cout<<endl;
    int cont = 1;
    int i = 1;
    int j = 1;
    int m = 0;
    int64_t limit = 1000000000;
        while(i <= limit){
            if(i%2 != 0){
                while (j <= (i/2)){
                    if(i%j == 0 && cont <= 2){
                        cont++;
                    }
                    j++;
                }
                if(cont == 2){
                    cout<<i<<", ";
                    m++;
                }
                cont = 1;
                j = 1;
                i++;
                if(m == n){
                    break;
                }
            }
            else{
                i++;
            }
        }
}

