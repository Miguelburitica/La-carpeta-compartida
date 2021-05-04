#include <cstdlib>
#include <iostream>
#include <math.h>
#include<iomanip>
using namespace std;

double f(double x){
    double y=pow(x,2)-2;
    return y;
}
double g(double k,double x){
	return x+k*f(x);
}
int main(){
    double raiz,p0=1.1,tol=0.01;
    int i=1, Tope=500;
      double p;
	  while(i<=Tope){
	    p=g(1,p0);
	    cout<<i<<"\t"<<p<<"\t"<<f(p)<<endl;
	  	if(fabs(p-p0)<tol){
		    raiz=p;
			i=Tope+2;
 	    }else{
	  	    i++;
	  	    p0=p;
         }
	  }
	  if(i==Tope+1)
	    cout<<"NA"<<endl;
	cout<<raiz<<endl;
}
