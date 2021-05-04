#include <cstdlib>
#include <iostream>
#include <iomanip>
#include<math.h>

using namespace std;
double media(int n,double A[]){

    double x=0;

    for (int i=0;i<n;i++){
        x+=A[i];
    }
    return x/n;

}


double varianza(int n,double A[]){
    double v=0;
    double x=media(n,A);
    for (int i=0;i<n;i++){

        v+=(A[i]-x)*(A[i]-x);


    }
    return v/n;


}

double dsvstd(int n,double A[]){
    return sqrt(varianza(n,A));
}

void leerArreglo(int N,double A[]){



    for (int i=0;i<N;i++){
        cout<<"entre el dato "<<i<<"-esimo: ";
        cin>>A[i];cout<<endl;

    }
}

void imprimirArreglo(int N, double A[]){
    cout<<A[0];
    for (int i=1;i<N;i++){
        cout<<", "<<A[i]<<" ";

    }

}

int main(){
    int n;

    cout<<"ingrese cantidad de datos"<<endl;
    cin>>n;
    double A[n];
    leerArreglo(n,A);
    cout<<"sus datos: "<<endl;
    imprimirArreglo(n,A);cout<<endl;
    cout<<"media: "<<media(n,A)<<endl;cout<<"varianza: "<<varianza(n,A)<<endl;cout<<"desviacion estandar: "<<dsvstd(n,A)<<endl;


    system("PAUSE");
    return EXIT_SUCCESS;

}
