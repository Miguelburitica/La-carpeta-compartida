#include<stdlib.h>
#include<stdio.h>

void ordemamiento(int *,int*);

int main(){
	int n;
	int *apuntador, *k;
	k=&n;
	FILE *D, *R;
	D = fopen("Datos.txt","r");
	if (D == NULL){
		printf("\n ERROR ");
		exit(1);
	}
	 fscanf(D, "%d", &n);
	 apuntador = malloc(n*sizeof(int));
	 if ( apuntador == NULL){
	 	printf("\n Memoria insuficiente\n");
	 	exit(1);
	 }
	 for (int i=0;i<n;i++){
	 	fscanf(D, "%f", &apuntador[i]);
     }
	 fclose(D);
	 ordemamiento(apuntador,k);
	 R = fopen("Resultados.txt","w");

	 for (int i=0;i<n;i++){
	 	fprintf(R,"%f ",*(apuntador+i));
	 }
	 fclose(R);
	 printf ("\n\n ARCHIVOS GENERADOS CORRECTAMENTE ... \n");
	 return(0);

}

void ordemamiento(int *apuntador,int *k){
	int num[100], aux, cont=0,m;
	for (int i=0;i<*k;i++){
		if (*(apuntador+i)%2!=0){
			num[cont]=*(apuntador+i);
			cont++;
		}
	}
	m=sizeof(num);
	for (int i=0;i<m;i++){
		for (int j=0;j<m;j++){
			if (num[j]>num[j+1]){
				aux = num[j];
				num[j] = num[j+1];
				num[j+1] = aux;
		    }
		}
	}
	cont=0;
	for (int i=0;i<*k;i++){
		if (*(apuntador+i)%2!=0){
			*(apuntador+i)=num[cont];
			cont++;
	}
    }
}
