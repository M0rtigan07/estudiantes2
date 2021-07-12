//5. Realice un programa que le permita introducir 5 nombres de estudiantes,
//luego ingrese las notas del primer parcial segundo parcial y
//2 actividades en clase y si la suma de estos es menor de 21
//muestre un mensaje que diga lamentablemente el estudiante NOMBRE no tiene derecho a examen final si
//la suma es mayor que 20 pero menor que 28 el mensaje deberá de decir necesita esforzarse para aprobar el curso y
//si la suma es mayor de 28 el mensaje será nos vemos el próximo semestre en otro curso

#include <iostream>
#include <string>
using namespace std;

//Comienzan las definiciones de clases

class Estudiante {
private:
    std::string nombre;
public:
    void ingresarNombre(std::string pNombre);
    std::string mostrarNombre();
};
void Estudiante::ingresarNombre(string pNombre)
{
    nombre = pNombre;
}
string Estudiante::mostrarNombre()
{
    return nombre;
}

class Notas {
private:
    int primerParcial, segundoParcial, actividad1, actividad2;
    Estudiante elEstudiante;
public:
    void ingresarPP(int pprimerParcial);
    void ingresarSP(int psegundoParcial);
    void ingresarA1(int pactividad1);
    void ingresarA2(int pactividad2);
    void asociarEstudiante(Estudiante pestu);
    int mostraPP();
    int mostrarSP();
    int mostrarA1();
    int mostrarA2();
    string MostrarNombre();
    void Mensaje();
};
void Notas::ingresarPP(int pprimerParcial) {
    primerParcial = pprimerParcial;
}
void Notas::ingresarSP(int psegundoParcial) {
    segundoParcial = psegundoParcial;
}
void Notas::ingresarA1(int pactividad1)
{
    actividad1 = pactividad1;
}
void Notas::ingresarA2(int pactividad2) {
    actividad2 = pactividad2;
}
int Notas::mostraPP()
{
    return primerParcial;
}
int Notas::mostrarSP()
{
    return segundoParcial;
}
int Notas::mostrarA1()
{
    return actividad1;
}
int Notas::mostrarA2()
{
    return actividad2;
}
void Notas::asociarEstudiante(Estudiante pestu)
{
    elEstudiante = pestu;
}

string Notas::MostrarNombre()
{
    return elEstudiante.mostrarNombre();
}
void Notas::Mensaje()
{
    int totalNotas;
    totalNotas = primerParcial + segundoParcial + actividad1 + actividad2;
    if (totalNotas < 20) cout << "Lamentablemente el alumno " << elEstudiante.mostrarNombre() << " No tiene derecho a examen final \n";
    else if (totalNotas >= 20 && totalNotas < 28) cout << "El alumno " << elEstudiante.mostrarNombre() << " necesita esforzarse para aprobar el curso \n";
    else cout << elEstudiante.mostrarNombre() << " nos vemos el proximo semestre \n";

}

// Finalizan las definiciones de clases

int main()
{
    Estudiante estudiantes[5];
    Notas unaNota[5];
    //Estudiante unEstud;
    //unEstud.ingresarNombre("Juan");
    //std::cout << "El nombre es " << unEstud.mostrarNombre();
    string nombre;
    int nota1, nota2, nota3, nota4;

    for (int i = 0; i < 5; i++)
    {
        cout << "Ingrese el nombre \n";
        cin >> nombre;
        estudiantes[i].ingresarNombre(nombre);
        cout << "Ingrese Nota \n";
        cin >> nota1;
        unaNota[i].ingresarPP(nota1);
        cout << "Ingrese Nota \n";
        cin >> nota2;
        unaNota[i].ingresarSP(nota2);
        cout << "Ingrese Nota \n";
        cin >> nota3;
        unaNota[i].ingresarA1(nota3);
        cout << "Ingrese Nota \n";
        cin >> nota4;
        unaNota[i].ingresarA2(nota4);
        unaNota[i].asociarEstudiante(estudiantes[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "El Nombre es " << unaNota[i].MostrarNombre() << "\n";
        cout << "Primer Parcial =  " << unaNota[i].mostraPP() << "\n";
        cout << "Segundo Parcial =  " << unaNota[i].mostrarSP() << "\n";
        cout << "Primer Actividad =  " << unaNota[i].mostrarA1() << "\n";
        cout << "Segunda Actividad =  " << unaNota[i].mostrarA2() << "\n--------------------------\n";
        unaNota[i].Mensaje();
        cout << "\n--------------------------\n";

    }
}






