#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
    int n;
    cin>>n;
    char w[n];
    cin>>w;
    char k, l;
    int cont = 0, num, acum = 12, multDiez = 1, j = 0;
    cout<<"Va "<<j<<" veces"<<endl;
    for(j; l == ','; j++){
        l = w[j];
        cout<<"Va "<<j<<" veces"<<endl;
    }
    j -= 1;
    int i = 0;
    for(i; k == ','; i++){
        cout<<"Está llendo en la "<<i<<" vez"<<endl;
        k = w[i];
        num = (int) k;
        multDiez = pow(10, j);
        j--;
        acum += num*multDiez;
    }
    cout<<acum<<endl;
}
