#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

void leerArrelgoVidimencional(int *,int *, double M[][100]);

void sumasDeFilas(int *,int *, double M[][100]);

int main(){
    int m, n;
    cout<<"Ingresa la cantidad de filas que deseas que tenga tu arreglo bidimencional: ";
    cin>>m;
    cout<<"Ingresa la cantidad de columnas que deseas que tenga tu arreglo bidimencional: ";
    cin>>n;
    double M[m][100];
    leerArrelgoVidimencional(&m, &n, M);
    sumasDeFilas(&m, &n, M);
}

void leerArrelgoVidimencional(int *m, int *n, double M[][100]){
    int K = *m;
    int L = *n;
    for(int i = 0; i < K; i++){
        for(int j = 0; j < L; j++){
            cout<<"entre componente "<<i<<" , " <<j<<" : ";  cin>>M[i][j]; cout<<endl;
        }
    cout<<endl;
    }
}

void sumasDeFilas(int *m,int *n, double M[][100]){
    int K = *m;
    int L = *n;
    double Total = 0;
    for(int i = 0; i < K; i++){
        for(int j = 0; j < L; j++){
            Total += M[i][j];
        }
        cout<<"La suma total de la fila "<<i<<"-esima es: "<<Total<<endl;
        Total = 0;
    }
}
