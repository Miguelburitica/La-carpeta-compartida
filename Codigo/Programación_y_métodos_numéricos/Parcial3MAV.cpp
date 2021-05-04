#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    char A[200];
    char C[200];
    char D[400];
    char k = 'o';
    char l = 'a';
    int n = 0, i = 0, j = 0;
    cin.getline(A,200);
    cin.getline(C,200);
    while(k != '\0' || l != '\0'){
        k = A[i];
        while(k != ' ' && k != '\0'){
            k = A[i];
            if(k != '\0'){
                i++;
                D[n++] = k;
            }
            else{
                D[n++] = ' ';
                break;
            }
        }
        l = C[j];
        while(l != ' ' && l != '\0'){
            l = C[j];
            if(l != '\0'){
                j++;
                D[n++] = l;
            }
            else{
                D[n++] = ' ';
                break;
            }
        }
    }
    cout<<D<<endl;
}
