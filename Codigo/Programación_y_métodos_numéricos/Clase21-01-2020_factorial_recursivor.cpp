#include<iostream>
#include<cstdlib>

using namespace std;

int facRec(int n){
    if(n==0)
       return 1;
       else
          return n*facRec(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<facRec(n)<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
