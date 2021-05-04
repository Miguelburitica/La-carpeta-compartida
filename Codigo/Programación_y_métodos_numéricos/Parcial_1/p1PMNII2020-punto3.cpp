#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

#define pi 3.14159265359

double f(double x,int k){
    double y=5*pow(x,2)+k*x+2;
    return y;
}
int main(){
    int n;
    cout<<" entre entero positivo n : "; cin>>n; cout<<endl;
    for(int k=2;k<20;k++)
        cout<<k<<"\t"<<pow(f(pow(pi,2),k),n)<<endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}

