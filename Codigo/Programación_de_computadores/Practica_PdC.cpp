#include <iostream>

using namespace std;

int main() {
	int n, H;
	int subsidio = 0;
	int subsidioPhijo;
	cin>>n;
	cin>>H;
	if(n <= 2){
		subsidio = 7000;
		subsidioPhijo = n*subsidio;
	}
	else if(n <= 5){
		subsidio = 9000;
		subsidioPhijo = n*subsidio;
	}
	else{
		subsidio = 12000;
		subsidioPhijo = n*subsidio;
	}
	if(H == 'v'){
		subsidioPhijo += 20000;
		cout<<subsidioPhijo<<endl;
	}
	else{
		cout<<subsidioPhijo<<endl;
	}
}
