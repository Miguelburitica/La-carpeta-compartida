#include <iostream>
#include <math.h>
#include <iomanip>
#include <cstdlib>

using namespace std;

void impArr(int n, int A[]){
         for(int j=0; j<n;j++)
                cout<<A[j]<<" , ";
         cout<<endl;
}
void eratostenes(int n, int B[]){
    int A[n+1];
        for(int i=0;i<=n;i++){
                A[i]=(i%2==0)? 0:i;
        }
        A[1]=0; A[2]=2;

        for(int p=3;p<=(int)sqrt(n);p=p+2)
        if(A[p]!=0){
            int k=3;
            while(k<=n/p){
                A[k*p]=0;
                k+=2;
            }
        }
        int j=0;
    for(int i=0;i<=n;i++){
        if(A[i] != 0){
            B[j]=i; j++;
        }
    }

}
void leerMatriz(int m,int n, double M[][100]){
        for(int i=0; i<m;i++){
          for(int j=0;j<n;j++){
               cout<<"entre componente "<<i<<" , " <<j<<" : ";  cin>>M[i][j]; cout<<endl;
          }
          cout<<endl;
        } 
}
void imprimirMatriz(int m,int n, double M[][100]){
        for(int i=0; i<m;i++){
          for(int j=0;j<n;j++)
                cout<<M[i][j]<<"\t";
          cout<<endl;
        }
        cout<<endl;
}
void sumaMatriz(int m,int n,double A[][100],double B[][100],double C[][100]){
    for(int i=0; i<m;i++)
          for(int j=0;j<n;j++)
            C[i][j]=A[i][j]+B[i][j];
}
void transpuestaMatriz(int m, int n,double M[][100],double TM[][100]){
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
           TM[j][i] = M[i][j];
}
void productorEscalarMatriz(int m, int n,double M[][100],double e,double eM[][100]){
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
           eM[i][j] = e*M[i][j];
}
void multiplicacionMatricial(int m, int p, int n,double A[][100], double B[][100], double C[][100]){
    for(int i = 0;i < m;i++){
        for(int j = 0;j < m;j++){
            C[i][j] = 0;
            for(int k = 0; k < p; k++)
                C[i][j] += A[i][k]*B[k][j];
        }
    }
}

int main(){
    int Opcion = 0;
    cout<<"Que operaci�n deseas hacer: "<<endl<<"si ingresas el 1: Sumas/restas de matrices."<<endl<<"si ingresas el 2 producto escalar a una matriz."<<endl<<"si ingresas el 3 multiplicacion entre 2 matrices."<<endl<<"si ingresas el 4 generar una matriz de numeros primos: ";
    cin>>Opcion;
    cout<<endl;
    if(Opcion == 1){
        int m, n;
        cout<<"Ingresa el tamanio de las matrices que deseas sumar."<<endl<<"Ingresa la cantidad de filas: ";
        cin>>m;
        cout<<endl;
        cout<<"Ahora ingresa la cantidad de columnas: ";
        cin>>n;
        cout<<endl;
            double A[m][100], B[m][100], C[m][100];
                leerMatriz(m,n,A);
                leerMatriz(m,n,B);
                cout<<"Su primer matriz es: "<<endl;
                imprimirMatriz(m,n,A);
                cout<<"Su segunda matriz es: "<<endl;
                imprimirMatriz(m,n,B);
                sumaMatriz(m,n,A,B,C);
                cout<<"La suma de sus dos matrices es: "<<endl;
                imprimirMatriz(m,n,C);
    }
    else if(Opcion == 2){
        int m, n;
        double e;
        cout<<"Ingresa el tamanio de la matriz a la que quieres multiplicar."<<endl<<"\t"<<"Ingresa la cantidad de filas: ";
        cin>>m;
        cout<<endl;
        cout<<"\t"<<"Ahora ingresa la cantidad de columnas: ";
        cin>>n;
        cout<<"\t"<<"Ahora ingresa el valor escalar, por el cual deseas multiplicar la matriz: ";
        cin>>e;
            double A[m][100];
                leerMatriz(m, n, A);
                cout<<"La matriz que has ingresado es: "<<endl;
                imprimirMatriz(m, n, A);
                productorEscalarMatriz(m, n, A, e, A);
                cout<<"La matriz resultante del producto escalar es: "<<endl;
                imprimirMatriz(m, n, A);
    }
    else if(Opcion == 3){
        int m, n, p;
        cout<<"Ingresa los tamanios de las matrices que deseas multiplicar."<<endl<<"\t"<<"Ingresa la cantidad de filas de la primer matriz: ";
        cin>>m;
        cout<<endl;
        cout<<"\t"<<"Ahora ingresa la cantidad de columnas de la primer matriz que a su vez,"<<endl<<"\t"<<"sera la misma cantidad de filas de la segunda matriz: ";
        cin>>p;
        cout<<"\t"<<"Ahora ingresa la cantidad de columnas que tendra la segunda matriz: ";
        cin>>n;
            double A[m][100], B[p][100], M[m][100];
                leerMatriz(m, p, A);
                leerMatriz(p, n, B);
                multiplicacionMatricial(m, p, n, A, B, M);
                cout<<"Su primer matriz es: "<<endl;
                imprimirMatriz(m,p,A);
                cout<<"Su segunda matriz es: "<<endl;
                imprimirMatriz(p,n,B);
                cout<<"El resultado de la multiplicacion de las matrices es: "<<endl;
                imprimirMatriz(m, n, M);
    }
    else if(Opcion == 4){
        int m, n;
        cout<<"Ingresa la cantidad de filas que tendra la matriz que deseas: ";
        cin>>m;
        cout<<"Ingresa la cantidad de columna que tendra la matriz que deseas: ";
        cin>>n;
        int k = n*m*100;
        int B[k];
        eratostenes(k, B);
        double A[m][100];
        //leerMatriz(m, n, A);
        int c = 0;
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++){
                A[i][j] = B[c];
                c++;
            }
        imprimirMatriz(m, n, A);
    }
    else
        cout<<"cometiste un error, reinicia el programa"<<endl;
}
