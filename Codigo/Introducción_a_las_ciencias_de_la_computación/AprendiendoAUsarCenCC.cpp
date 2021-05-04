// Nota:
//1. Recuerde que Datos.txt debe estar en la misma carpeta o directorio de
//   el archivo ejecutable .exe.
//2. Los datos en el archivo Datos.txt deben ir separados por espacio.

# include <stdio.h>
# include <stdlib.h> // libreria necesaria para el comando exit(.).
float promedio( float * , int);

int main()
{
 	int n;
	float *x, prom;
	FILE *D, *R;
	D = fopen("Datos.txt", "r");
	if (D == NULL)
	{
		printf("\n\n Error: El archivo no se puede abrir");
		exit(1);
	}
	fscanf(D, "%d", &n); //n es el primer valor leido y corresponde al número valores a leer.
	x = malloc(n*sizeof(float)); // se cree un arreglo con n espacios en memoria tipo float.
	if ( x == NULL)
	{
		printf("\n\n Memoria insuficiente \n\n");
		exit(1);
	}
	for (int i = 0; i < n ; i++)
		fscanf(D, "%f", &x[i]);
	fclose(D); // siempre es necesario cerrar los archivos abiertos o creados
	R = fopen("Resultados.txt","w");
	prom = promedio(x,n);
	fprintf(R,"El promedio es %8.4f \n", prom);
	fclose(R);
	printf ("\n\n ARCHIVOS GENERADOS CORRECTAMENTE ... \n");
	return(0);
}
float promedio( float *x, int n)
{
	float suma = 0.0;
	for (int i=0; i<n ; ++i)
		suma += x[i];
	return suma/n;
}
