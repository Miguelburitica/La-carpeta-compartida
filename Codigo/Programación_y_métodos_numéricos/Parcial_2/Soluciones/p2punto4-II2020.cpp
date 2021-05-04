#include <iostream>
#include<cstdlib>
using namespace std;

void leeMat(int m,int n, double A[][15]){
    for(int i=0; i<m;i++){
         for(int j=0; j<n;j++){
                  cout<<"DIGITE EL ELEMENTO ["<<i<<"]["<<j<<"] = ";
                  cin>>A[i][j];
                  cout<<endl;
         }
    }
}
void impMat(int m,int n, double A[][15]){
    for(int i=0; i<m;i++){
         for(int j=0; j<n;j++)
                cout<<A[i][j]<<"\t";
         cout<<endl;
    }
    cout<<endl;
}
void proEscMat(int m,int n, double A[][15],double k,double B[][15]){
     for(int i=0;i<m;i++)
       for(int j=0;j<n;j++)
         B[i][j]=k*A[i][j];
}
void multMat(int m,int p,int n, double A[][15], double B[][15],double C[][15]){
     for(int i=0;i<m;i++)
       for(int j=0;j<n;j++){
          C[i][j]=0;
          for(int k=0;k<p;k++)
             C[i][j] += A[i][k]*B[k][j];
       }
}
void transMat(int m,int n, double A[][15],double B[][15]){
     for(int i=0;i<m;i++)
       for(int j=0;j<n;j++)
         B[j][i]=A[i][j];
}
void sumMat(int m,int n, double A[][15],double B[][15],double C[][15]){
     for(int i=0;i<m;i++)
       for(int j=0;j<n;j++)
         C[i][j]=A[i][j]+B[i][j];
}
double trazaMat(int n, double A[][15]){
    double t=0;
     for(int i=0;i<n;i++)
        t += A[i][i];
     return t;
}
int main()
{
    int m=3,n=m,p=m;

    double B[m][15],C[m][15],D[m][15],E[m][15];

    double A[m][15]={{1,2,3},{4,5,6},{7,8,9}};
    impMat(m,n,A);
    double t=trazaMat(m,A);
    cout<<t<<endl;
    proEscMat(m,n,A,t,B);
    transMat(m,n,A,C);
    multMat(m,n,p,A,C,D);
    sumMat(m,n,B,D,E);
    impMat(m,n,E);

    system("PAUSE");
    return EXIT_SUCCESS;
}





