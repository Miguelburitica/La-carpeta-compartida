#include <cstdlib>
#include <iostream>
#include <math.h>
#include<iomanip>
using namespace std;

double f(double x){
    double y=pow(x,2)-pow(2,x);
    return y;
}
double g(double k,double x){
	return x+k*f(x);
}
int main(){
    double raiz,p0=-0.5,tol=0.001;
    int i=1, Tope=100;
      double p;
	  while(i<=Tope){
	    p=g(0.5,p0);
	    cout<<i<<setw(20)<<p<<setw(20)<<f(p)<<endl;
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
