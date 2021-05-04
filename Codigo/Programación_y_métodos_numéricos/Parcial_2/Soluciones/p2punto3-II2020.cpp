#include<cstdlib>
#include<iostream>
#include<math.h>
using namespace std;
void impArr(int n, double A[]){
         for(int j=0; j<n;j++)
                cout<<A[j]<<" , ";
         cout<<endl;
}
double media(int n, double A[]){
    double s=0;
    for(int j=0; j<n;j++)
        s += A[j];
    return s/n;
}
double varianza(int n, double A[]){
    double m = media(n,A);
    cout<<m<<endl;
    double q=0;
    for(int j=0; j<n;j++)
        q += pow((A[j]-m),2);
    return q/n;

}
int main(){
    double A[]={1,2,3,4,5}; int n=5;
    double q = varianza(n,A);
    cout<<q<<endl;
    cout<<sqrt(q)<<endl;
    system("PAUSE");
    EXIT_SUCCESS;
}
