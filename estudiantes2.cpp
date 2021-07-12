// estudiantes2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;


class Estudiante {
private:
    string nombre;
public:
    void ingresarNombre(string pNombre);
    string mostrarNombre();
};


int main()
{
    Estudiante estudiantes[5];
    Estudiante unEstudiante;
   // unEstudiante.ingresarNombre("Juan");
   
    //cout << "El nombre es " + unEstudiante.mostrarNombre()

    string nombreEs;

    for (int i = 0; i < 5; i++)
    {
        cout << "Ingrese el nombre\n";
        cin >> nombreEs;
         estudiantes[i].ingresarNombre(nombreEs) ;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "El Nombre es\n" << estudiantes[i].mostrarNombre() << "\n";
     
    }
}





void Estudiante::ingresarNombre(string pNombre)
{
    nombre = pNombre;
}

   string Estudiante:: mostrarNombre()
{
    return nombre;
}