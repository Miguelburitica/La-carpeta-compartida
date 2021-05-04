#include<cstdlib>
#include<iostream>
#include<math.h>
using namespace std;
void impArr(int n, int A[]){
         for(int j=0; j<n;j++)
                cout<<A[j]<<" , ";
         cout<<endl;
}
int interseccion(int m,int n, int A[],int B[],int C[]){
    int k=0;
    for(int i=0; i<m;i++)
        for(int j=0; j<n;j++)
            if(A[i]==B[j]){
                C[k]=A[i];k++;
            }
    impArr(k,C);
    return k;
}
void maxMinArr(int n, int A[]){
    int ma=A[0], mi=A[0];
    for(int i=1; i<n;i++){
        if(ma<=A[i]) ma=A[i];
         if(mi>=A[i]) mi=A[i];
    }
    cout<<"el max de la interseccion es : "<<ma<<endl;
    cout<<"el min de la interseccion es : "<<mi<<endl;
}

int main(){
    int m=5, A[]={1,2,3,4,5},n= 4, B[]={3,4,5,6},C[n];
    int k = interseccion(m,n,A,B,C);
    maxMinArr(k,C);

    system("PAUSE");
    EXIT_SUCCESS;
}
