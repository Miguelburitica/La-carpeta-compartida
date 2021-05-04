#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
    int n;
    int *x;
    FILE *D, *R;
    D = fopen("Datos.txt","r");
    if(D == NULL){
		printf("\n\n Error: El archivo no se puede abrir");
		exit(1);
    }
    fscanf(D, "Ingrese la cantidad de datos que tengra el archivo: %d", &n);
    R = fopen("Resultados.txt","w");
}
