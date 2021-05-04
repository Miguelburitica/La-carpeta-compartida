#include <iostream>
#include <stdlib.h>
using namespace std;

void pedir_datos(float **,int&,int&);
void imprimir(float **, int&, int&);
void suma_filas(float **,int&, int&, float&);


int main(){
	int ncol,nfil;
    float **puntero_matriz;
    float resultado=0.0;

    cout << "\n Ingrese el número de filas de la matriz: "; cin>>nfil;
	cout << "\n Ingrese el número de columnas de la matriz: "; cin>>ncol;

    puntero_matriz = new float *[nfil];
	if (puntero_matriz==NULL){
   		cout << "\n Memoria insuficiente ";
   		exit(1);
   }
   for (int i=0;i<nfil;i++){
   	  	 puntero_matriz[i]= new float [ncol];
   	  	 if (puntero_matriz[i]==NULL){
	   		cout << "\n Memoria insuficiente ";
	   		exit(1);
   	  	 }
   	  }
	cout << "\n\n ** Digite elementos de la matriz ** ";
	for (int i=0;i<nfil;i++){
	   cout << "\n";
	   for (int j=0;j<ncol;j++){
	     	cout<< "\n Elemento["<< i+1 << "][" << j+1 << "] = ";
     		cin>>((puntero_matriz+i)+j);
	     }

	    cout << "\n";
	}

	cout <<  "\n\n **  Matriz ingresada  ** " <<endl;

	for (int i=0;i<nfil;i++){
	    cout << "\n \t";
	    for (int j=0;j<ncol;j++){
	    	cout <<((puntero_matriz+i)+j)<<"\t" ;
	    }

	    cout << "\n";


	}
	suma_filas(puntero_matriz,nfil,ncol,resultado);

    return(0);
}

void suma_filas(float **puntero_matriz,int& nfil, int& ncol, float& resultado){
	for (int i=0;i<nfil;i++){
	  cout << "\n \t";
	   for (int j=0; j<ncol ;j++){
	   	 resultado+= ((puntero_matriz+i)+j);
	   }
	   cout<<"\n\tla suma de la fila "<<i+1<<" es: "<<resultado;
	   resultado=0;
	   cout << "\n";
    }
}
