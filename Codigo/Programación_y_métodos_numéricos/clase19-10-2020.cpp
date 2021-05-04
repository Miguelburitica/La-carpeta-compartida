#include <iostream>
#include <math.h>
#include <iomanip>
#include <cstdlib>
#include <string>

using namespace std;

double f(double x){
    double y;
    y = pow(x, 2) - pow(2, x);
    return y;
}

double f_p(double x){
    double y;
    y = 2*x - pow(2, x)*log(2);
    return y;
}

int leer_arreglos(int n, double A[]){
    for(int i=0;i<n;i++){
        cout<<"entre el dato "<<i<<"-esimo : ";
        cin>>A[i];cout<<endl;
    }
}

double puntosMedios(double a, double b){
    double m;
    if(a * b < 0){
        if(a < b){
            b = b - a;
            double k = a;
            a = a - a;
            m = (b - a) / 2;
            m = m + k;
        }
        else if(b < a){
            a = a - b;
            double k = b;
            b = b - b;
            m = (a - b) / 2;
            m = m + k;
        }
        else{
            m = a;
        }
    }
    else if(a * b > 0 && a < 0){
        a = -a;
        b = -b;
        if(a < b){
            m = (b - a) / 2;
            m = m + a;
        }
        else if(b < a){
            m = (a - b) / 2;
            m = m + b;
        }
        else{
            m = 0;
        }
        m = -m;
    }
    else if(a * b > 0 && a > 0){
        if(a < b){
            m = (b - a) / 2;
            m = m + a;
        }
        else if(b < a){
            m = (a - b) / 2;
            m = m + b;
        }
        else{
            m = 0;
        }
    }
    else{
        m = 0;
    }
    return m;
}

double biseccion(double a, double b){
    double m;
    if(f(a) * f(b) < 0){
        m = puntosMedios(a, b);
        double r = f(m);
        if(r == 0){
            return m;
        }
        else{
            while(f(m) != 0){
                if(f(m) * f(a) < 0){
                    m = puntosMedios(m, a);
                }
                else if(f(m) * f(b) < 0){
                    m = puntosMedios(b, m);
                }
                else{
                    cout<<"loser"<<endl;
                }
            }
        }
    }
    return m;
}

void puntoFijo(double a, double b, double t, double n){
    double x, r, k, l;
    int cont = 0;
    x = a;
        while(x <= b && cont < 2){
            r = f(x);
            if(r == x){
                cont += 1;
                if(cont == 1){
                    k = x;
                    t = k;
                }
                else if(cont == 2){
                    l = x;
                    n = l;
                }
            }
            x += 0.5;
            //cout<<x<<endl;
        }
    //cout<<"----"<<t[0]<<endl;
    //cout<<"----"<<n[0]<<endl;
}

double newtonMethod(double a, double b){
    double i, r, n, r_p;
    i = b;
    int j = 0;
    while(i >= a){
        r = f(i);
        r_p = f_p(i);
        n = i - (r/r_p);
        if(r_p != 0){
            if((i - n) < 0.0001){
                cout<<j<<" veces"<<endl;
                return n;
            }
            j++;
            i = n;
        }
        else{
            cout<<"come kk"<<endl;
            return n;
        }
    }
}
/*
double Newton(double p0){
    double raiz;
    int i = 1;
    double p, fp0, dfp0;
    while(i <= Tope){
        fp0 = f(p0);
        dfp0 = f_p(p0);
        if(dfp0 != 0){
            p = p0-fp0/dfp0:
            cout<<i<<"\t"<<p<<"\t"<<f(p)<<endl;
            if()
        }
    }
}*/

void calculoL(double X[], double x, int n, double R[]){
    int k = 0;
    int i = 0;
    int j = 0;
    double x0 = X[i];
    double x1 = X[j];
    double acumulador = 1;
    while(i < n){
        while(j < n){
            if(j != i){
                x0 = X[i];
                x1 = X[j];
                acumulador *= (x - x1)/(x0 - x1);
                j++;
            }
            else{
                j++;
            }
        }
        j = 0;
        R[k++] = acumulador;
        acumulador = 1;
        i++;
    }
}

double lagrange(double X[], double Y[], int cantidadDatos, double x){
    int i = 0;
    double R[cantidadDatos];
    double sumatoria = 0;
    calculoL(X, x, cantidadDatos, R);
    while(i < cantidadDatos){
        double P = R[i];
        sumatoria += Y[i]*P;
        i++;
    }
    return sumatoria;
}

double taylor(){

}

int main(){
    double a, b, p, q, x;
    int n;
    cout<<"Ingresa el valor a evaluar: ";
    cin>>x;
    cout<<endl;
    cout<<"Ingresa la cantidad de valores que tienes de la funcion: ";
    cin>>n;
    double X[n] = {(-5), (-3.5), (-3), (-2.8), (-1.2), 0, 0.9, 1.9, 2.5, 3.7, 4.4, 6};
    double Y[n] = {0.92523454, 0.24509239, -0.29048121, -0.50525633, -1.29347214, 0, 2.99696971, 13.6494995, 31.054707, 149.12519, 357.43222, 2420.29335};
    //leer_arreglos(n, X);
    //leer_arreglos(n, Y);
    cout<<setprecision(9)<<lagrange(X, Y, n, x)<<endl;
    //cout<<f(l)<<endl;
    //cout<<biseccion(a, b)<<endl;
    //cout<<puntosMedios(l, n)<<endl;
    //puntoFijo(a, b, p, q);
    //cout<<p<<endl;
    //cout<<q<<endl;
    //cout<<newtonMethod(a, b)<<endl;
}
