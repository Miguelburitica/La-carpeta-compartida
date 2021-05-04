#include <stdio.h>
#include <stdlib.h>

void Sort(int *x, int n);

int main(){
    int n;
    int *x;
    FILE *D, *R;

    D = fopen("Datos.txt","r");
    if(D == NULL){
		printf("\n\n Error: El archivo no se puede abrir. \n \n");
		exit(1);
    }
    fscanf(D, "%d", &n);
    x = malloc(n*sizeof(float));
    if(x == NULL){
        printf("\n\n Memoria insuficiente. \n \n");
        exit(1);
    }
    for (int i = 0; i < n; i++){
		fscanf(D, "%d", &x[i]);
    }
    fclose(D);

    R = fopen("Resultados.txt","w");
    int cont = 0;
    int j = 0;
    for(int i = 0; i < n; i++){
        if(x[i]%2 != 0){
            cont++;
        }
    }
    int impares[cont];
    for(int i = 0; i < n; i++){
        if(x[i]%2 != 0){
            impares[j++] = x[i];
        }
    }
    Sort(impares, cont);
    j = 0;
    for(int i = 0; i < n; i++){
        if(x[i]%2 != 0){
            x[i] = impares[j++];
        }
    }
    for (int i = 0; i < n; i++){
		fprintf(R,"%d ", x[i]);
    }
    fclose(R);
    printf("\n\n\tImpresion exitosa.");
}

void Sort(int *x, int n){
    int l;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(x[j] < x[i]) {
                l = x[i];
                x[i] = x[j];
                x[j] = l;
            }
        }
    }
}
