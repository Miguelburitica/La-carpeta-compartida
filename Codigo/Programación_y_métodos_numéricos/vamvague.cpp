#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char p1[100];
	char p2[100];
	char p3[100];
	int n,m,s,i=0,cont1=0,cont2=0,p;

	cout<<"introduzca la primera palabra: ";
	cin.getline(p1,100);
	cout<<"introduzca la segunda  palabra: "; cin>>p2;
	cin.getline(p2,100);
	n=strlen(p1);    //longitud de strins
	m=strlen(p2);

	s=0;
	p=0;
	while(p<2){         //bucle que va recorriendo los string y los va copiando dependiendo el caso

	    while(s==0){
	        p3[i]=p1[cont1];
	    	i++;
	    	cont1++;
	    	if ( p1[cont1]==' '){
			   p3[i]=' ';
			   i++;
			   s=1;
			   if(p==1){
        	    s=0;
                 }          //cuando hay un espacio sale del string 32 es el caracter espacio en ACSII
	    	   break;
			   }
            if (cont1==n){          //si llega al limite del string, sale del bucle
            	p++;
				s=1;             //y continua en el otro  string llenando lo que falta
            	break;
			}
        }
    	while(s==1){
    		p3[i]=p2[cont2];           //igual que arriba pero ahora con el segundo string
    		i++;
    		cont2++;
	    	if (p2[cont2]==' '){
	    		p3[i]=' ';
			    i++;
			    s=0;
			    if(p==1){
        	    s=1;
                 }
		    	break;
	    	}
	    	if (cont2==m){
	    		p++;
	    		s=0;
	    		break;
			}
        }

    }
	cout<<"\nla palabra intercalada es: "<<p3<<endl;
}
