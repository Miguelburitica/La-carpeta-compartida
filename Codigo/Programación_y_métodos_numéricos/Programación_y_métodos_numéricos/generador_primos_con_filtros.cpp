#include <iostream>
#include <math.h>
#include <iomanip>
#include <cstdlib>

using namespace std;


int main(){
    int n;
    cout<<"Ingresa la cantidad de numeros primos que deseas calcular: "<<endl;
    cin>>n;
    cout<<endl;
    int cont = 1;
    int i = 1;
    int j = 1;
    int m = 0;
    int64_t limit = 1000000000;
        while(i <= limit){
            if(i%2 != 0){
                if(i%3 != 0){
                    if(i%5 != 0){
                        if(i%7 != 0){
                            if(i%11 != 0){
                                if(i%13 != 0){
                                    if(i%17 != 0){
                                        if(i%19 != 0){
                                            if(i%23 != 0){
                                                if(i%29 != 0){
                                                    if(i%31 != 0){
                                                        if(i%37 != 0){
                                                            if(i%41 != 0){
                                                                if(i%43 != 0){
                                                                    if(i%47 != 0){
                                                                        if(i%53 != 0){
                                                                            if(i%59 != 0){
                                                                                if(i%61 != 0){
                                                                                    if(i%67 != 0){
                                                                                        if(i%71 != 0){
                                                                                            if(i%73 != 0){
                                                                                                if(i%79 != 0){
                                                                                                    if(i%83 != 0){
                                                                                                        if(i%89 != 0){
                                                                                                            if(i%97 != 0){
                                                                                                                if(i%101 != 0){
                                                                                                                    if(i%103 != 0){
                                                                                                                        if(i%107 != 0){
                                                                                                                            if(i%109 != 0){
                                                                                                                                if(i%113 != 0){
                                                                                                                                    if(i%127 != 0){
                                                                                                                                        if(i%131 != 0){
                                                                                                                                            if(i%137 != 0){
                                                                                                                                                if(i%139 != 0){
                                                                                                                                                    if(i%149 != 0){
                                                                                                                                                        if(i%151 != 0){
                                                                                                                                                            if(i%157 != 0){
                                                                                                                                                                if(i%163 != 0){
                                                                                                                                                                    if(i%167 != 0){
                                                                                                                                                                        if(i%173 != 0){
                                                                                                                                                                            if(i%179 != 0){
                                                                                                                                                                                if(i%181 != 0){
                                                                                                                                                                                    if(i%191 != 0){
                                                                                                                                                                                        if(i%193 != 0){
                                                                                                                                                                                            if(i%197 != 0){
                                                                                                                                                                                                if(i%199 != 0){
                                                                                                                                                                                                    while (j <= (i/2)){
                                                                                                                                                                                                        if(i%j == 0 && cont <= 2){
                                                                                                                                                                                                            cont++;
                                                                                                                                                                                                        }
                                                                                                                                                                                                        j++;
                                                                                                                                                                                                    }
                                                                                                                                                                                                    if(cont == 2){
                                                                                                                                                                                                        cout<<i<<", ";
                                                                                                                                                                                                        m++;
                                                                                                                                                                                                    }
                                                                                                                                                                                                    cont = 1;
                                                                                                                                                                                                    j = 1;
                                                                                                                                                                                                    i++;
                                                                                                                                                                                                    if(m == n){
                                                                                                                                                                                                        break;
                                                                                                                                                                                                    }
                                                                                                                                                                                                }
                                                                                                                                                                                                else{
                                                                                                                                                                                                    i++;
                                                                                                                                                                                                }
                                                                                                                                                                                            }
                                                                                                                                                                                            else{
                                                                                                                                                                                                i++;
                                                                                                                                                                                            }
                                                                                                                                                                                        }
                                                                                                                                                                                        else{
                                                                                                                                                                                            i++;
                                                                                                                                                                                        }
                                                                                                                                                                                    }
                                                                                                                                                                                    else{
                                                                                                                                                                                        i++;
                                                                                                                                                                                    }
                                                                                                                                                                                }
                                                                                                                                                                                else{
                                                                                                                                                                                    i++;
                                                                                                                                                                                }
                                                                                                                                                                            }
                                                                                                                                                                            else{
                                                                                                                                                                                i++;
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                        else{
                                                                                                                                                                            i++;
                                                                                                                                                                        }
                                                                                                                                                                    }
                                                                                                                                                                    else{
                                                                                                                                                                        i++;
                                                                                                                                                                    }
                                                                                                                                                                }
                                                                                                                                                                else{
                                                                                                                                                                    i++;
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                            else{
                                                                                                                                                                i++;
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                        else{
                                                                                                                                                            i++;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                    else{
                                                                                                                                                        i++;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                                else{
                                                                                                                                                    i++;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                            else{
                                                                                                                                                i++;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                        else{
                                                                                                                                            i++;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                    else{
                                                                                                                                        i++;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                                else{
                                                                                                                                    i++;
                                                                                                                                }
                                                                                                                            }
                                                                                                                            else{
                                                                                                                                i++;
                                                                                                                            }
                                                                                                                        }
                                                                                                                        else{
                                                                                                                            i++;
                                                                                                                        }
                                                                                                                    }
                                                                                                                    else{
                                                                                                                        i++;
                                                                                                                    }
                                                                                                                }
                                                                                                                else{
                                                                                                                    i++;
                                                                                                                }
                                                                                                            }
                                                                                                            else{
                                                                                                                i++;
                                                                                                            }
                                                                                                        }
                                                                                                        else{
                                                                                                            i++;
                                                                                                        }
                                                                                                    }
                                                                                                    else{
                                                                                                        i++;
                                                                                                    }
                                                                                                }
                                                                                                else{
                                                                                                    i++;
                                                                                                }
                                                                                            }
                                                                                            else{
                                                                                                i++;
                                                                                            }
                                                                                        }
                                                                                        else{
                                                                                            i++;
                                                                                        }
                                                                                    }
                                                                                    else{
                                                                                        i++;
                                                                                    }
                                                                                }
                                                                                else{
                                                                                    i++;
                                                                                }
                                                                            }
                                                                            else{
                                                                                i++;
                                                                            }
                                                                        }
                                                                        else{
                                                                            i++;
                                                                        }
                                                                    }
                                                                    else{
                                                                        i++;
                                                                    }
                                                                }
                                                                else{
                                                                    i++;
                                                                }
                                                            }
                                                            else{
                                                                i++;
                                                            }
                                                        }
                                                        else{
                                                            i++;
                                                        }
                                                    }
                                                    else{
                                                        i++;
                                                    }
                                                }
                                                else{
                                                    i++;
                                                }
                                            }
                                            else{
                                                i++;
                                            }
                                        }
                                        else{
                                            i++;
                                        }
                                    }
                                    else{
                                        i++;
                                    }
                                }
                                else{
                                    i++;
                                }
                            }
                            else{
                                i++;
                            }
                        }
                        else{
                            i++;
                        }
                    }
                    else{
                        i++;
                    }
                }
                else{
                    i++;
                }
            }
            else{
                i++;
            }
        }
}

