#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

double Fact(int n){
    double F=1;
    for (int i=1; i<=n;i++){
        F=F*i;
    }
    return F;
}
int main()
{
    int n;
    cout<<"Ingrese un numero mayor que 10 y menor que 101: "<<endl;
    cin>>n;
    cout<<endl;
    cout<<"divisores de "<<n<<"\t"<<"factorial del divisor"<<endl;
    int i;
    int D;
    for(int i=1; i<=n;i++){
            if (n%i==0){
            }
            D = D + 1;
            cout<<i<<"\t"<<Fact(D)<<endl;
    }
    system("PAUSE");
    return EXIT_SUCCESS;

}
