#include <iostream>
#include <math.h>
#include <iomanip>
#include <cstdlib>

using namespace std;

void impArr(int N, double A[])
{
    cout << A[0];
    for (int i = 1; i < N; i++)
    {
        cout << ", " << A[i] << " ";
    }
}

void leerMatriz(int m, int n, double M[][20])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "entre componente " << i << " , " << j << " : ";
            cin >> M[i][j];
            cout << endl;
        }
        cout << endl;
    }
}

void imprimirMatriz(int m, int n, double M[][20])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << M[i][j] << "\t";
        cout << endl;
    }
    cout << endl;
}

void sumaMatriz(int m, int n, double A[][20], double B[][20], double C[][20])
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            C[i][j] = A[i][j] + B[i][j];
}

void transpuestaMatriz(int m, int n, double M[][20], double TM[][20])
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            TM[j][i] = M[i][j];
}

void productorEscalarMatriz(int m, int n, double M[][20], double e, double eM[][20])
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            eM[i][j] = e * M[i][j];
}

void multiplicacionMatricial(int m1, int n1, int m2, int n2, double A[][20], double B[][20], double M[][20])
{

    if (n1 == m2)
    {
        int s = 0;
        for (int k = 0; k < m1; k++)
        {
            for (int jj = 0; jj < n2; jj++)
            {
                for (int ii = 0; ii < n1; ii++)
                {
                    s = s + A[k][ii] * B[ii][jj];
                }
                M[k][jj] = s;
                s = 0;
            }
        }
    }
}

double traza(int m, double M[][20])
{

    double t = 0;
    for (int i = 0; i < m; i++)
    {
        t += M[i][i];
    }
}

void operaciones_matrices(double c, int m, int n, int m2, int n2, double A[][20], double B[][20], double C[][20])
{
    cout << "Que operación deseas hacer: " << endl
         << "si ingresas el 1: Sumas de matrices." << endl
         << "si ingresas el 2 producto escalar c por la matriz A" << endl
         << "si ingresas el 3 multiplicacion entre A y B" << endl
         << "si ingresas el 4 generar la matriz A transpuesta : " << endl
         << "si ingresas el 5 devuelve la traza de A: " << endl;
    int op;
    cin >> op;
    if(op==2){
    cout << "ingresa el escalar: " << endl;
    cin >> c;
        }

    switch (op)
    {

    case 1:
        sumaMatriz(m, n, A, B, C);
        cout << "La suma de sus dos matrices es: " << endl;
        imprimirMatriz(m, n, C);
        break;

    case 2:
        productorEscalarMatriz(m, n, A, c, C);
        cout << "La matriz que has ingresado es: " << endl;
        imprimirMatriz(m, n, A);
        cout << "La matriz resultante del producto escalar es: " << endl;
        imprimirMatriz(m, n, C);
        break;

    case 3:
        multiplicacionMatricial(m, n, m2, n2, A, B, C);
        cout << "Su primer matriz es: " << endl;
        imprimirMatriz(m, n, A);
        cout << "Su segunda matriz es: " << endl;
        imprimirMatriz(m2, n2, B);
        cout << "El resultado de la multiplicacion de las matrices es: " << endl;
        imprimirMatriz(m, n2, C);
        break;

    case 4:
        transpuestaMatriz(m, n, A, C);
        cout << "La matriz que has ingresado es: " << endl;
        imprimirMatriz(m, n, A);
        cout << "La matriz transpuesta es: " << endl;
        imprimirMatriz(n, m, C);
        break;

    case 5:
        cout << "La traza de la matriz: " << endl;
        imprimirMatriz(m, n, A);
        cout << endl;
        cout << traza(m, A) << endl;
    }
}

int main()
{
    //PRUEBA DE LAS SUBRUTINAS: ver Subrutina OPERACIONES_MATRICES


    int m, n;
    double c;
    cout << "ingresa filas de la matriz A" << endl;
    cin >> m;
    cout << "ingresa columnas de la matriz A" << endl;
    cin >> n;
    double A[m][20];
    leerMatriz(m, n, A);
    cout << "matriz A: " << endl;
    imprimirMatriz(m, n, A);

    double C[m][20];
    double C_0[m][20];
    double C_s[m][20];
    double C_m[m][20];
    double F[m][20];



    //RESOLICION DEL PROBLEMA

    cout<<endl;


    cout<<"PARA RESOLVER EL PROBLEMA: para la matriz cuadrada A, kA+AxA^t:  "<<endl;

    double k=traza(m,A);

    productorEscalarMatriz(m,n,A,k,C_0);

    transpuestaMatriz(m,n,A,C_s);

    multiplicacionMatricial(m,m,m,m,A,C_s,C_m);

    sumaMatriz(m,m,C_0,C_m,F);

    imprimirMatriz(m,m,F);







    cout << endl;
}
