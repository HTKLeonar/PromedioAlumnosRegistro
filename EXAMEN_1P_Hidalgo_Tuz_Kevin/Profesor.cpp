#include "Profesor.h"
//En esta parte es donde estan mis metodos, lo que va a hacer cada uno para asi yo llamar lo en mi metodo main

//Aqui declaro mi constructor al cual le paso los parametros que declaro en mi metodo main, que en este caso necesito para ingresar mi usuario y contraseña
Profesor::Profesor(string _Usuario, string _Contrasenia)
{
    this->Usuario = _Usuario;
    this->Contrasenia = _Contrasenia;
}

//Aqui es donde declaro mi destructor el cual por defecto no hace nada pero se declara aun así
Profesor::~Profesor()
{
}

//Esta funcion la cree para iniciar sesion aqui es donde declaro que contraseña usar y que usuario
void Profesor::IniciarSesion()
{
    //por supuesto uso un if para confirmar de que el usuario y contraseña son autenticos y por lo cual uso una variable mas la cual me da ese valor
    if (this->Usuario == "Hi" && this->Contrasenia == "123")
    {
        this->Autentica = true; //La variable es de tipo booleana la cual solo da dos valores verdadero o falso que es lo que se declara aqui
    }
    else
    {
        this->Autentica = false;
    }
}
//profesor@umsa.edu.mx 5b23klM2
//En esta funcion pues es donde me retorna el valor cuando la contraseña es ingresada por el usuario
bool Profesor::EsAutentica()
{
    return this->Autentica;
}

//Esta otra funcion me sirvio para el cierre de sesion el cual si la contraseña esta mal o vacia me cierre esa accion
void Profesor::CerrarSesion()
{
    this->Usuario = "";
    this->Contrasenia = "";
    this->Autentica = false;
}

//Ya en esta parte del codigo lo que hice fue declarar las funciones del sub menu

//En la primera me pide los datos del alumno y lo que hice fue pedir las pero en este caso las variables las puse de forma publica en la clase objeto

void Profesor::DatosAlumno()
{

    cout << "======= Datos del alumno ========" << endl;
    cout << "Nombre: " << endl;
    cin >> Nombre;
    cout << "Apellido Paterno: " << endl;
    cin >> ApellidoPaterno;
    cout << "Apellido Materno:" << endl;
    cin >> ApellidoMaterno;
    cout << "Edad: " << endl;
    cin >> Edad;
    cout << "Matricula: " << endl;
    cin >> Matricula;
    cout << "Presiona ' F ' (Femenino) o ' M '(Masculino): " << endl; //Aqui le agrague un detalle para que el usuario solo ingrese un cacter en ves de escribir texto en este caso use un char
    cin >> sexo;
}

//En la segunda funcion cree el segundo inciso del menu principal el cual me pedia capturar los promedios del alumno
//De igual forma declare las variables de manera publica en la clase objeto
void Profesor::CapturarPromedios()
{

    cout << "======== Calificaciones ========" << endl;
    cout << "Calificacion del Primer parcial: " << endl;
    cin >> PrimerParcial;
    cout << "Calificacion del Segundo parcial: " << endl;
    cin >> SegundoParcial;
    cout << "Calificacion del Proyecto final: " << endl;
    cin >> ProyectoFinal;
    cout << "Calificacion del Examen: " << endl;
    cin >> Examen;
}

//Ya la funcion o accion numero tres la dividir en dos partes ya que me pedia sacar el promedio y mostrar los datos completos del alumno

/*En la primera lo que hice fue llamar los datos que ingrese de las calificaones esn la funcion capturar promedio los llamen por lo cual use el this
De igual forma cree estas cinco variables para almacenar la informacion en este caso la conversion de el dato y el porcentaje de cada dato
Y asi guardar lo en las variables y sumar dichas variable para asi finalmente guardar el resultado en una sola variable.
Y para que no sea mas largo solo imprimir el valor en esa misma funcion y llamar la al metodo main en mi funcion menu principal*/
void Profesor::PromedioFinal()
{
    float PromedioFinal, Par1, Par2, Exa, Proy;

    Par1 = this->PrimerParcial * .25;
    Par2 = this->SegundoParcial * .25;
    Exa = this->Examen * .30;
    Proy = this->ProyectoFinal * .20;
    PromedioFinal = Par1 + Par2 + Exa + Proy;
    cout << "Promedio Final es: " << PromedioFinal << endl;
}

//Ya en esta ultima funcion lo que hace es solo llamar las variable que declara en mi clase objeto, para que asi yo la llame a mi menu principal y
//solo me las imprima
void Profesor::ImprimirInformacionAlumno()
{
    cout << "Nombre completo del alumno: " << endl;
    cout << this->Nombre + " " + this->ApellidoPaterno + " " + this->ApellidoMaterno << endl;
    cout << "Edad del alumno: " << endl;
    cout << this->Edad << endl;
    cout << "Matricula del alumno: " << endl;
    cout << this->Matricula << endl;
    cout << "Sexo del alumno: " << endl;
    if (this->sexo == 'M')
    {
        cout << "Masculino " << endl;
    }
    else if (this->sexo == 'F')
    {
        cout << "Femenino " << endl;
    }
    else
    {
        cout << "Vuelve a interntar" << endl;
        return DatosAlumno();
    }
}