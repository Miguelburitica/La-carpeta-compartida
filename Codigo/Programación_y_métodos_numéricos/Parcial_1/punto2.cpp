#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

double Fact(int n)
{
    double F=1;
    for (int i=1; i<=n;i++)
    {
        F=F*i;
    }
    cout<<F<<endl;
}

int main()
{

    int n;
    int D=0;
    cout<<"Ingrese un numero mayor que 10 y menor que 101: "<<endl;
    cin>>n;
    cout<<endl;
    cout<<"divisores de "<<n<<"\t"<<"\t"<<endl;
    int i;

    for(int i=1; i<=n;i++)
        {
            if (n%i==0)
            {
                cout<<i<<endl;
                D=D+1;
            }
        }
    (int)D;
    cout<<"la cantidad de divisores es "<<D<<". El factorial de "<<D<<" es "<<Fact(D)<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;

}
