//Kevin Hidalgo Tuz IGTI  3A
#include <iostream>
#include "Profesor.h"

using namespace std;

void MenuPrincipal(); //Funcion Menu
Profesor *p1;         //Creo de forma global mi objeto

int main()
{

    //Mi menu de acceso con dos opciones
    cout << "========= MENU DE ACCESO =========" << endl;
    cout << " 1) Iniciar sesion. " << endl;
    cout << " Salir del programa (Presione cualquier tecla). " << endl;
    cout << " ================================= " << endl;
    cout << " Ingrese una opcion: ";
    int opcion = 0; //Variable que me permite usar el mientras, y esta inicializada en 0 para cerrar la
    cin >> opcion;

    do
    {
        //Variables las cuales me serviran los parametros al constructor
        string Usuario, Contrasenia;

        switch (opcion) //El switch el cual me ayuda a elegir la opcion declarada antes
        {
        case 1:
            cout << "Ingrese usuario: ";
            cin >> Usuario;
            cout << "Ingrese contrasenia: ";
            cin >> Contrasenia;
            p1 = new Profesor(Usuario, Contrasenia); //Aqui es donde envio los parametros al constructor del objeto
            p1->IniciarSesion();
            if (p1->EsAutentica() == true)
            {
                MenuPrincipal();
            }
            else
            {
                cout << "\nIntente de nuevo "<< endl;
                return main();
            }
            break;
        default:
            cout << "Saliste del programa " << endl;

        }
        break;
    } while (opcion != 1);

    return 0;
}

void MenuPrincipal() // Aqui es donde declare mi submenu una vez el usuario y contraseña esten correctos
{

    cout << "====== MENU PRINCIPAL ===== " << endl;
    cout << " 1) Agregar Informacion del alumno. " << endl;
    cout << " 2) Capturar Promedio del alumno. " << endl;
    cout << " 3) Calcular promedio e imprimir informacion del alumno. " << endl;
    cout << " 4) Cerrar sesion. " << endl;
    cout << "============================" << endl;
    cout << "Ingrese una opcion: " << endl;
    int opcion = 0; //Aqui volvi a usar otra variable opcion pero en este caso solo se encuentra para esta funcion, obviamente la inicialice en 0 para poder salir de la opcion
    cin >> opcion;

    do
    {
        switch (opcion) //Aqui use otro switch pero esta vez puse cuatro opciones las cuales son las que salen una vez iniciado de forma correcta sesion
        {
        case 1:
            cout << "            OPCION 1          " << endl;
            p1->DatosAlumno();      //Aqui declaro a mi objteto que esta de manera global llamando la funcion o plantilla que se declaro en la clase objeto
            return MenuPrincipal(); //Esto de aqui me sirve para que depues de poner los datos del alumno me retorne nuevamente al menu principal
            break;
        case 2:
            cout << "            OPCION 2          " << endl;
            p1->CapturarPromedios(); //Lo mismo aqui llamo la funcion o plantilla que fue declarada en mi clase objeto que fue profesor
            return MenuPrincipal();
            break;
        case 3:
            cout << "            OPCION 3          " << endl;
            p1->ImprimirInformacionAlumno(); //Este igual es el mismo objeto solo que llamando la funcion que fue declarada en mi clase objeto llamada profesor
            p1->PromedioFinal();
            return MenuPrincipal();
            break;
        case 4:
            cout << "\nCerraste sesion, ingresa de nuevo el usuario y contrasenia\n " << endl;
            p1->CerrarSesion(); //Aqui llamo a mi objeto nuevamente pero lo que hace esta funcion es regresar al menu de acceso del metodo main osea me cierra el usuario
            main();
        }
        
    } while (opcion != 4);
    
}
