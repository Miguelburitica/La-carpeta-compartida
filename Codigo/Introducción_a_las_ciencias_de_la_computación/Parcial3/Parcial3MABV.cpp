#include <iostream>
#include <math.h>
#include <iomanip>
#include <cstdlib>

using namespace std;

void matrizFinal(int m,int n, int M[][2]);

bool seIntersectan(int P[][2], int R[][2]);

void rectangulos(int x1, int y1, int x2, int y2, int A[][2]);

void puntosInterseccion(int P[][2], int R[][2], int Puntos[][2]);

int main(){
    int x1, y1, x2, y2, x12, y12, x22, y22;
    int A[4][2];
    cout<<"\n \n \tIngresa la coordenada x del primer punto del primer rectangulo: ";
    cin>>x1;
    cout<<"\n \tIngresa la coordenada y del primer punto del primer rectangulo: ";
    cin>>y1;
    cout<<"\n \tIngresa la coordenada x del segundo punto del primer rectangulo: ";
    cin>>x2;
    cout<<"\n \tIngresa la coordenada y del segundo punto del primer rectangulo: ";
    cin>>y2;
    cout<<"\n \tAhora vamos a capturar los puntos del segundo rectangulo \n \n"<<endl;
    cout<<"\n \tIngresa la coordenada x del primer punto del segundo rectangulo: ";
    cin>>x12;
    cout<<"\n \tIngresa la coordenada y del primer punto del segundo rectangulo: ";
    cin>>y12;
    cout<<"\n \tIngresa la coordenada x del segundo punto del segundo rectangulo: ";
    cin>>x22;
    cout<<"\n \tIngresa la coordenada y del segundo punto del segundo rectangulo: ";
    cin>>y22;
    cout<<"\n \n \t######################################"<<endl;
    cout<<"\t############# Respuestas #############"<<endl;
    int cont = 0;
    int R1[4][2] = {{x1, y1}, {x1, y2}, {x2, y1}, {x2, y2}};
    int R2[4][2] = {{x12, y12}, {x12, y22}, {x22, y12}, {x22, y22}};
    for(int i=0; i<4;i++){
        for(int j=0;j<4;j++){
            if(R1[i][0] == R2[j][0] && R1[i][1] == R2[j][1]){
                cont++;
            }
        }
    }
    int m, M, n, N, a, c, d, D, f, F, e, g;
    if(R1[0][0] <= R1[2][0]){
        m = R1[0][0];
        M = R1[2][0];
    }
    else if(R1[2][0] < R1[0][0]){
        m = R1[2][0];
        M = R1[0][0];
    }
    if(R1[0][1] <= R1[1][1]){
        n = R1[0][1];
        N = R1[1][1];
    }
    else if(R1[1][1] < R1[0][1]){
        n = R1[1][1];
        N = R1[0][1];
    }
    if(R2[0][0] <= R2[2][0]){
        d = R2[0][0];
        D = R2[2][0];
    }
    else if(R2[2][0] < R2[0][0]){
        d = R2[2][0];
        D = R2[0][0];
    }
    if(R2[0][1] <= R2[1][1]){
        f = R2[0][1];
        F = R2[1][1];
    }
    else if(R2[1][1] < R2[0][1]){
        f = R2[1][1];
        F = R2[0][1];
    }
    bool b = false;
    a = M - d;
    c = D - m;
    e = N - f;
    g = F - n;
    if(a == 0 || c == 0 || e == 0 || g == 0){
        b = true;
    }
    if(cont == 2 && b){
        cout<<"\n \tNo, no se intersectan uno."<<endl;
    }
    else if(seIntersectan(R1, R2)){
        cout<<"\n \tSi, si se intersectan"<<endl;
        puntosInterseccion(R1, R2, A);
        cout<<"\tLos puntos del rectangulo interseccion son: \n \t";
        matrizFinal(4, 2, A);
    }
    else{
        cout<<"\t \nNo, no se intersectan dos"<<endl;
    }
}

void matrizFinal(int m,int n, int M[][2]){
        cout<<"\n \n \t                                        x \ty \n \n";
        for(int i=0; i<m;i++){
            cout<<"\tPunto "<<i+1<<" del rectangulo interseccion \t";
            for(int j=0;j<n;j++){
                cout<<M[i][j]<<"\t";
            }
        cout<<"\t"<<endl;
        }
        cout<<endl;
}

bool seIntersectan(int P[][2], int R[][2]){
    bool b = false;
    int m, M, n, N, a, c;
    if(P[0][0] <= P[2][0]){
        m = P[0][0];
        M = P[2][0];
    }
    else if(P[2][0] < P[0][0]){
        m = P[2][0];
        M = P[0][0];
    }
    if(P[0][1] <= P[1][1]){
        n = P[0][1];
        N = P[1][1];
    }
    else if(P[1][1] < P[0][1]){
        n = P[1][1];
        N = P[0][1];
    }
    int i = 0;
    int j = 0;
    while(i < 3){
        a = R[i][0];
        if(a >= m && a <= M){
            while(j < 3){
                c = R[j][1];
                if(c >= n && c <= N){
                    b = true;
                }
                j++;
            }
        }
        i++;
    }
    return b;
}

void rectangulos(int x1, int y1, int x2, int y2, int A[][2]){
    int Puntos[4][2] = {{x1, y1}, {x1, y2}, {x2, y1}, {x2, y2}};
    for(int i=0; i<4;i++){
        for(int j=0;j<2;j++){
            A[i][j] = Puntos[i][j];
        }
    }
}

void puntosInterseccion(int P[][2], int R[][2], int Puntos[][2]){
    int m, M, n, N, a, c, d, D, f, F, e, g;
    int P1[2], P2[2], P3[2], P4[2];
    if(P[0][0] <= P[2][0]){
        m = P[0][0];
        M = P[2][0];
    }
    else if(P[2][0] < P[0][0]){
        m = P[2][0];
        M = P[0][0];
    }
    if(P[0][1] <= P[1][1]){
        n = P[0][1];
        N = P[1][1];
    }
    else if(P[1][1] < P[0][1]){
        n = P[1][1];
        N = P[0][1];
    }
    if(R[0][0] <= R[2][0]){
        d = R[0][0];
        D = R[2][0];
    }
    else if(R[2][0] < R[0][0]){
        d = R[2][0];
        D = R[0][0];
    }
    if(R[0][1] <= R[1][1]){
        f = R[0][1];
        F = R[1][1];
    }
    else if(R[1][1] < R[0][1]){
        f = R[1][1];
        F = R[0][1];
    }
    a = M - d;
    c = D - m;
    e = N - f;
    g = F - n;
    if(a < c && e < g){
        rectangulos(M, N, d, f, Puntos);
    }
    else if(a < c && g < e){
        rectangulos(M, F, d, n, Puntos);
    }
    else if(c < a && e < g){
        rectangulos(D, N, m, f, Puntos);
    }
    else if(c < a && g < e){
        rectangulos(D, F, m, n, Puntos);
    }
    //###############################################################
    else if(a == c && g < e){
        rectangulos(M, F, d, n, Puntos);
    }
    else if(a == c && e < g){
        rectangulos(M, N, d, f, Puntos);
    }
    else if(a < c && g == e){
        rectangulos(M, F, d, n, Puntos);
    }
    else if(c < a && g == e){
        rectangulos(D, F, M, n, Puntos);
    }
    else if(a == c && g == e){
        rectangulos(M, N, m, n, Puntos);
    }
}
