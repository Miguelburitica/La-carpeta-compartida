//Hacer el fibonacci recursivo y averiguar como se trabajan las matrices
#include <iostream>
#include <math.h>

using namespace std;

int FiboRec(int n){
    if (n == 0)
        return 1;
    if (n == 1){
        return 1, 1;
        }
        else{
            cout<<FiboRec(n-2) + FiboRec(n-1)<<endl;
            return FiboRec(n-2) + FiboRec(n-1);
            }
}
int main(){
    int x;
    cin>>x;
    cout<<"Los valores de la serie de fiboancci que deseas son: "<<FiboRec(x)<<endl;
}
