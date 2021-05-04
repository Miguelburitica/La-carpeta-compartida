#include <iostream>
#include <cstdlib>

using namespace std;

#define nC 20

int Maximo(int n, int A[nC])
{
    int Max = A[0];
    for (int i = 1; i < n; i++)
    {
        if (A[i] > Max)
        {
            Max = A[i];
        }
    }
    return Max;
}

int Minimo(int n, int A[nC])
{
    int Min = A[0];
    for (int i = 1; i < n; i++)
    {
        if (A[i] < Min)
        {
            Min = A[i];
        }
    }
    return Min;
}

int interseccion(int N1, int A[], int N2, int B[], int C[])
{
    int t = 0;

    for (int i = 0; i < N1; i++)
    {
        for (int j = 0; j < N2; j++)
        {
            if (A[i] == B[j])
            {
                t++;
            }
        }
    }

    int n = 0;

    for (int i = 0; i < N1; i++)
    {
        for (int j = 0; j < N2; j++)
        {
            if (A[i] == B[j])
            {
                C[n] = A[i];
                n++;
            }
        }
    }
    cout << C[0];
     for (int i = 1; i < t; i++)
    {
        cout <<", "<< C[i] << "";
    }
    return t;
}

void Leerarreglo(int n, int B[nC])
{
    cout << "Conjunto: " << endl;
    for (int p = 0; p < n; p++)
    {
        cout << p + 1 << "-entrada: ";
        cin >> B[p];
        cout << endl;
    }
    cout << endl;
}

void imprimirArreglo(int n, int A[nC])
{
    cout << A[0];
    for (int i = 1; i < n; i++)
    {
        cout << ", " << A[i];
    }
}

int main()
{
    int A[nC], B[nC], C[nC];
    int n, m, l, Max, Min;
    l;
    cout << "Longitud del conjunto A: ";
    cin >> n;
    cout << endl;
    cout << "Longitud del conjunto B: ";
    cin >> m;
    if (n > 20 or m > 20)
    {
        cout << "No se aceptan conjuntos con cardinal mayor que 20." << endl;
    }
    else
    {
        cout << endl;
        Leerarreglo(n, A);
        Leerarreglo(m, B);
        cout << "Conjunto A: ";
        imprimirArreglo(n, A);
        cout << endl;
        cout << "Conjunto B: ";
        imprimirArreglo(m, B);
        cout << endl;
        cout << "La Interseccion de los conjuntos A y B es: ";
        l=interseccion(n, A, m, B, C);
        cout << endl;
        cout << "El minimo es: " << Minimo(l, C) << endl;
        cout << "El maximo es: " << Maximo(l, C) << endl;
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
