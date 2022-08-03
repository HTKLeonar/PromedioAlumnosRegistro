#include <iostream>

using namespace std;

//Creacion de mi clase

class Profesor
{

    //Aqui declare las variable que iba a necesitar para desarrollar el programa
    //En este caso solo lo unico que declare de manera privada fue el usuario y contraseña más obviamente una variable mas que me permita verificar de que sea
    //Correcto el usuario y la contraseña.
private:
    string Usuario;
    string Contrasenia;
    bool Autentica;

    //Estas funciones fueron para declarar el inicio y cierre mas la autenticación de mis variables en este caso el usuario contraseña y mi autenticacion
public:
    void IniciarSesion();
    void CerrarSesion();
    bool EsAutentica();

    //En el siguiente apartado declare mis constructores los cuales me sirvieron para pasar la informacion de los paramentros declarados en el metodo main
public:
    Profesor(string, string);
    ~Profesor();

    //Este apartado de aca fueron las variable las cuales use para crear el sub menu y los metodos
public:
    string Nombre, ApellidoPaterno, ApellidoMaterno;
    char sexo;
    int Edad, Matricula;
    float PrimerParcial, SegundoParcial, ProyectoFinal, Examen;

public:
    void DatosAlumno();
    void CapturarPromedios();
    void PromedioFinal();
    void ImprimirInformacionAlumno();

};