#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

double func (double x,int k){

    return 5*pow(x,2)+k*x+2;
};

double const pi =3.14159;

int main()
{

    double x;
    int k;
    int n;
    double sum=0;
    cout<<"ingrese real"<<endl;
    cin>>x;
    cout<<"ingrese entero"<<endl;
    cin>>k;
    cout<<"ingrese n"<<endl;
    cin>>n;

    cout<<"la funcion con los valores x y k da: "<< func(x,k) << endl;

    cout<<"la funcion elevada a la "<<n<<" con los valores x=pi^2 y k da: "<< pow(func(pow(pi,2),k),n) << endl;


    return 0;
}
