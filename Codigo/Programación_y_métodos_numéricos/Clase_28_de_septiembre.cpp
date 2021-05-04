#include <iostream>
#include <math.h>
#include <iomanip>
#include <cstdlib>

using namespace std;
//    Clase 28/09/2020

//      Un vector se declara así, <tipo_dato> <nombre_variable>[<tamaño_vector>] = {<elementos_del_tipo_declarado_anteriormente>}
//      Como ejemplo:
//      int posicion[3] = {12, 0, 2}  ó  string caracteristicas_libro[3] = {"Autor", "Titulo", "Publicación"}
//      int posicion[3];
//      posicion[0] = 12
//      posicion[1] = 0
//      posicion[2] = 2
//      cout<<posicion[3]<<endl;
//      mostrará {12, 0, 2}
//      int myMatriz1[2][2] = {{1,2},{1,1}}; //Matriz con 4 elementos
//      int fila1Casilla1 = myMatriz[1][1]; //Para acceder a la casilla 1,1 se usan dichos indices
//      int primerNumero = myMatriz[0][0]; //La primer casilla siempre será la de la fila 0 columna 0
void impArr(int n, int A[]){
         for(int j=0; j<n;j++)
                cout<<A[j]<<" , ";
         cout<<endl;
}
void imprimirMatriz(int m,int n, double M[][15]){
        for(int i=0; i<m;i++){
          for(int j=0;j<n;j++)
                cout<<M[i][j]<<"\t";
          cout<<endl;
        }
        cout<<endl;
}
void eratostenes(int B[]){
    int n=500;
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
	impArr(j,B);

}

void leerMatriz(int m,int n, double M[][15]){
        for(int i=0; i<m;i++){
          for(int j=0;j<n;j++){
               cout<<"entre componente "<<i<<" , " <<j<<" : ";  cin>>M[i][j]; cout<<endl;
          }
          cout<<endl;
        }
}
void sumaMatriz(int m,int n,double A[][15],double B[][15],double C[][15]){
    for(int i=0; i<m;i++)
          for(int j=0;j<n;j++)
            C[i][j]=A[i][j]+B[i][j];
}
void transpuestaMatriz(int m, int n,double M[][15],double TM[][15]){
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
           TM[j][i] = M[i][j];
}
void productorEscalarMatriz(int m, int n,double M[][15],double e,double eM[][15]){
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
           eM[i][j] = e*M[i][j];
}
/*void multiplicacionMatricial(int m, int n,int Ma[][nC],int o, int p,int Mb[][nC],int RM[][nC]){
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
           for(int k = 0; k < o; k++)
                for(int l = 0; l < p; l++)
                    if(n == o)
                        RM[i][l] =
                    else
                        cout<<"Las matrices no se pueden multiplicar"<<endl;
}*/
void multiplicacionMatricialBien(int m, int p, int n,double A[][15], double B[][15], double C[][15]){
    for(int i = 0;i < m;i++){
        for(int j = 0;j < m;j++){
            C[i][j] = 0;
            for(int k = 0; k < p; k++)
                C[i][j] += A[i][k]*B[k][j];
        }
    }
}
int main(){
	/*int n=5;
	int I[n][nC];
    for(int i=0; i<n;i++)
        for(int j=0;j<n;j++)
            I[i][j]=(i==j)? 1:0;
    //imprimirMatriz(n,n,I);

    int A[2][nC],B[2][nC],C[2][nC],T[3][nC], Mm[2][nC];
    leerMatriz(2,3,A);
    leerMatriz(3,4,B);
    //sumaMatriz(2,3,A,B,C);
    //transpuestaMatriz(2,3,A,T);
    imprimirMatriz(2,3,A);
    productorEscalarMatriz(2,3,4,A,Mm);
    //imprimirMatriz(2,3,Mm);
    //imprimirMatriz(3,2,T);
    imprimirMatriz(2,3,B);
    //imprimirMatriz(2,3,C);
    */
    double L [2][15], K[3][15],C[2][15],T[2][15];
    //leerMatriz(3,2,B);
    //imprimirMatriz(2,3,A);
    //imprimirMatriz(3,2,B);
    //productorEscalarMatriz(2,3,2,A,A);
    //multiplicacionMatricialBien(2,3,2,A,B,C);
    //imprimirMatriz(2,2,C);
    //transpuestaMatriz(3,2,B,T);
    //imprimirMatriz(2,3,T);
    //productorEscalarMatriz(2,3,3,T,T);
    //sumaMatriz(2,3,A,T,C);
    //imprimirMatriz(2,3,C);
    /*int B[500],n=3;
    eratostenes(B);
    double A[n][15];
    //leerMatriz(2,3,A);
    int c = 0;
    for(int i = 0; i<= n; i++)
        for(int j = 0; j < n; j++){
            A[i][j] = B[c];
            c++;*/
    int P[500];
    int c = 0,m= 2, n = 3;
    for(int i = 0; i<m;i++)
        for(int j = 0; j < n; j++)
            F[c] = A[i][j];

        }
imprimirMatriz(n,n,A);

}






//Tarea, hacer subrutinas de todas las operaciones entre matrices. trasnpuesta, producto por escalar, multiplicacion y generar una matriz diagonal identidad,
