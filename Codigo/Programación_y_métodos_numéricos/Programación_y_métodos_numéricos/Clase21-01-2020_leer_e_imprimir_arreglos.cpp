#include <iostream>
#include<cstdlib>

using namespace std;


int leer_arreglos(int n){
    int A[n];
    for(int i=0;i<n;i++){
        cout<<"entre el dato "<<i<<"-esimo : ";
        cin>>A[i];cout<<endl;
    }
    cout<<"el arreglo es : "; cout<<endl;
    for(int i=0;i<n;i++)
      cout<<A[i]<<" , ";
    cout<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
int main(){
    int a;
    cout<<"Ingresa cuantos valores quieres ingresar al arreglo: ";
    cin>>a;
    cout<<"Estos son tus arreglos: "<<endl<<imp_arreglos(a);
}
