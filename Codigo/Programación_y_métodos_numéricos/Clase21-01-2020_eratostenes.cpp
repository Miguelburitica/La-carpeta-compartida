#include <iostream>
#include<cstdlib>

using namespace std;


int main(){
    int n=5;
    int A[n];
    for(int i=0;i<n;i++){
        cout<<"entre el dato "<<i<<"-esimo : ";
        cin>>A[i];cout<<endl;
    }
    cout<<"el arreglo es : "; cout<<endl;
    for(int i=0;i<n;i++)
      cout<<A[i]<<" , ";
    cout<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
