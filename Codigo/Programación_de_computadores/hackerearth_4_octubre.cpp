#include <math.h>
#include <iostream>

using namespace std;

int main() {
	int x;
	cin>>x;
	int fibo1 = 1;
	int fibo2;
	int fibon = 1;
	if(x == 1){
        cout<<"0"<<endl;
	}
	else if(x == 2){
        cout<<"0"<<endl;
        cout<<"1"<<endl;
        cout<<"1"<<endl;
	}
	else if(x >= 3){
        cout<<"0"<<endl;
        cout<<"1"<<endl;
        while(fibon <= x){
            cout<<fibon<<endl;
            fibo2 = fibon;
            fibon = fibon + fibo1;
            fibo1 = fibo2;
        }
	}
	cout<<"FIN"<<endl;
}
