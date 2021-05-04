#include <iostream>
#include<cstdlib>
#include <iomanip>
#include<math.h>
using namespace std;

void impArr(int n, int A[]){
         for(int j=0; j<n;j++)
                cout<<A[j]<<" , ";
         cout<<endl;
}
void eratostenes(int B[]){
    int n=500;
    int A[n+1];
	for(int i=0;i<=n;i++){
		A[i]=(i%2==0)? 0:i;
	}
	A[1]=0; A[2]=2;

	for(int p=3;p<=(int)sqrt(n);p=p+2)
        if(A[p]!=0){
            int k=3;
            while(k<=n/p){
                A[k*p]=0;
                k+=2;
            }
        }
	int j=0;
    for(int i=0;i<=n;i++){
        if(A[i] != 0){
            B[j]=i; j++;
        }
    }
	impArr(j,B);

}
int main(){
    int B[500],n=3;
    eratostenes(B);
    double A[n][15];
    int c = 0;
    for(int i = 0; i<= n; i++)
        for(int j = 0; j < n; j++){
            A[i][j] = B[c];
            c++;
        }
imprimirMatriz(n,n,A);


}
