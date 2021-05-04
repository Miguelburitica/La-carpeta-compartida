#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
#include <cstdlib>

using namespace std;

int Cuad(int r){
    return pow(r, 2.0);
}

int aRec(int a, int b){
    return a*b;
}

bool esPar(int x){
    bool b = false;
    if(x%2 == 0){
        b = true;
        return b;
    }
    return b;
}

int main(){
    int a, b;
    cout<<"\n \n \t \t el primer valor";
    cin>>a;
    cout<<"\n \n \t \t el segundo valor";
    cin>>b;
    cout<<"\n \n \t \t "<<Cuad(a)<<endl;
    cout<<"\n \n \t \t "<<aRec(Cuad(a),Cuad(b))<<endl;
    if(esPar(aRec(Cuad(a),Cuad(b)))){
        cout<<"\n \n \t \t "<<aRec(Cuad(a),Cuad(b))<<" Es par."<<endl;
    }
    else{
        cout<<"\n \n \t \t "<<aRec(Cuad(a),Cuad(b))<<" No es par"<<endl;
    }
}
