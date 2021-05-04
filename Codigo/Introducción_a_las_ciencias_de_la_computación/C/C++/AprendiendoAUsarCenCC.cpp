//NOTA. El archivo Estudiantes.txt debe haber sido previamente creado, sino
// se hace de esta manera el código reportará un error.
#include <iostream>
#include <fstream>  //permite usar ofstream

using namespace std;

int main()
{
    ofstream F("Estudiantes.txt", ios::in); //ofstream Permite crear el objeto F
                                             // para administrar el archivo Estudiantes.txt
                                             //ios::out Abre un archivo para ingresar datos.
    if (!F)
    {
        cout <<"El archivo no puede abrirse";
        exit(1);
    }
    cout << "\t Ingrese ID, Nombre, Apellido, las notas de los parciales P1, P2 y P3\n"
         << "\t ctrl+z (EOF) para terminar \n \t";
    int ID;
    char Nombre[10];
    char Apellido[10];
    float P1,P2,P3;
    while (cin >> ID >> Nombre >> Apellido >> P1 >> P2 >> P3)
    {
        F << ID << " " << Nombre << " " << Apellido<< " "
          << P1 << " " << P2 <<" " << P3 << "\n";
        cout << " ? ";
    }
    cout << "\n\n ARCHIVO GENERADO CORRECTAMENTE ... \n";
    return(0);
}
