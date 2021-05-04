#include <iostream>

using namespace std;

int main() {
	int n1, n2, n3, k, l;
	cin>>n1>>n2>>n3;
	int i = 1;
	int acumulado1 = 0;
	k = n1;
	l = n1;
	while(l > 0){
		k /= i;
		l -= 1;
		if(k % i == 0 && l != 0){
			acumulado1 += k;
		}
		k = n1;
		i++;
	}
	cout<<acumulado1<<endl;
	int acumulado2 = 0;
	i = 1;
	k = n2;
	l = n2;
	while(l > 0){
		k /= i;
		l -= 1;
		if(k % i == 0 && l != 0){
			acumulado2 += k;
		}
		k = n2;
		i++;
	}
	cout<<acumulado2<<endl;
	l = n3;
	int acumulado3 = 0;
	i = 1;
	while(l > 0){
		k /= i;
		l -= 1;
		if(k % i == 0 && l != 0){
			acumulado3 += k;
		}
		k = n3;
		i++;
	}
	cout<<acumulado3<<endl;
	if(acumulado1 == 2*n1){
		cout<<"perfecto"<<endl;
	}
	else if(acumulado1 <= 2*n1){
		cout<<"deficiente"<<endl;
	}
	else{
		cout<<"abundante"<<endl;
	}
	if(acumulado2 == 2*n2){
		cout<<"perfeto"<<endl;
	}
	else if(acumulado2 <= 2*n2){
		cout<<"deficiente"<<endl;
	}
	else{
		cout<<"abundante"<<endl;
	}
	if(acumulado3 == 2*n3){
		cout<<"perfecto"<<endl;
	}
	else if(acumulado3 <= 2*n3){
		cout<<"deficiente"<<endl;
	}
	else{
		cout<<"abundante"<<endl;
	}
}
