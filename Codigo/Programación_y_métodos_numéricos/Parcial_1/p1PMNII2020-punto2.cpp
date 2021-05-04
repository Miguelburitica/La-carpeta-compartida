oiiiiiiiiiiiiiii狂p{创创创创创创创创创创创创创创创创创创创创创创创创创创创''''''''''''''''''''''''''''''''''''''''''''''''''''#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int divisores(int N){
    int d=2;
	cout<<1<<" , ";
	for(int i=2;i<=N/2;i++)
		if(N%i==0){
			cout<<i<<" , "; d++;
		}
	cout<<N<<" : ";
	return d;
}
double factorial(int n){
    double f=1;
    for(int i=1;i<=n;i++)
        f=f*i;
    return f;
}
int main(){
    for(int N=11;N<101;N++){
        cout<<N<<" : ";
        int d=divisores(N);
        cout<<d<<"! = "<<factorial(d)<<endl;
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}

