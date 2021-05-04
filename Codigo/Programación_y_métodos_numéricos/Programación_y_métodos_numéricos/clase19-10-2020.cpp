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
                break;
            }
            j++;
            i = n;
        }
        else{
            cout<<"come kk"<<endl;
            break;
            return n;
        }
    }
}
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
}

int main(){
    double a, b, p, q;
    cin>>a>>b;
    //cout<<f(l)<<endl;
    //cout<<biseccion(a, b)<<endl;
    //cout<<puntosMedios(l, n)<<endl;
    //puntoFijo(a, b, p, q);
    //cout<<p<<endl;
    //cout<<q<<endl;
    cout<<newtonMethod(a, b)<<endl;
}
