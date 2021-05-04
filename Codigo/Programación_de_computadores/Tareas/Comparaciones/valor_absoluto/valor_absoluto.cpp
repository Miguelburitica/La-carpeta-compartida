#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n;
    cout<<"Ingresa un valor numerico: ";
    cin>>n;
    if (n <= 0){
        n = n*(-1);
    }
    cout<<"El valor absoluto de tu numero es: "<<n;
}
