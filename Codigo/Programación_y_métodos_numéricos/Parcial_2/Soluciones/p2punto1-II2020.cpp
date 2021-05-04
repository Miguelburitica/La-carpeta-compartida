#include<cstdlib>
#include<iostream>
#include<math.h>
using namespace std;
void impArr(int n, int A[]){
         for(int j=0; j<n;j++)
                cout<<A[j]<<" ";
         cout<<endl;
}
void inverArr(int n, int A[], int B[])
{
     int i;
     for(i=0;i<n;i++)
      B[i]=A[n-1-i];
}
int Euclides(int a,int b){
  int r=a%b;
  while(r>0){
  	a=b; b=r; r=a%b;
  }
  cout<<"el maximo comun divisor de "<<a<<" y "<<b<<" es :"<<b<<endl;
  return b;
}
bool primoSiNo(int t){
    bool r=false;
	int n=1000, B[n];
    int A[n+1];
	for(int i=0;i<=n;i++){
		A[i]=(i%2==0)? 0:i;
	}
	A[1]=0; A[2]=2;

	for(int p=3;p<=(int)sqrt(n);p=p+2)
        if(A[p]!=0){
            int k=p;
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
    for(int i=0;i<j;i++)
      if (t == B[i])
        r=true;
    return r;
}
void decimalAbase(int m){
 int i,n,q,r,k;
    int A[100],B[100];
    for(k=2;k<=9;k++)
    {
    	q=m; i=0;n=m;
		while(k<=n)
        {  q=n/k;
           r=n%k;
           A[i]=r;
           i=i+1;
           n=q;
        }
        A[i]=q;
    inverArr(i+1,A,B);
    cout<<m<<" en base "<<k<<" es "<<endl;
    impArr(i+1,B);
    }

}
int main()
{
  int a=14,b=7,c;
  c=Euclides(a,b);
  if( primoSiNo(c)== true)
    decimalAbase(c);
  system("PAUSE");
  EXIT_SUCCESS;
}
