#include <iostream>
#include<cstdlib>

using namespace std;

int main(){
    int n=20,i=3,a=1,b=1,t;
    cout<<a<<" , "<<b<<" , ";
    i=3;
    while(i<=n){
        t=b;
        b=a+b;
        cout<<b<<" , ";
        a=t;
        i++;
    }
    cout<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
