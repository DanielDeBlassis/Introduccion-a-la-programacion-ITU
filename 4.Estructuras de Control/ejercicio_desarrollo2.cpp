#include <iostream>

/** ESTRUCTURAS DE CONTROL - EJERCICIO DESARROLLO #2
*
* Elabore un programa que sume números ingresados por el usuario y que su ejecución finalice cuando la suma 
* de los números sea mayor a 50 o bien cuando la cantidad de números ingresados sea mayor a 10. 
* Cuando se cumpla alguna de las condiciones de finalización, se debe mostrar la suma de todos los números.
*
**/

// COLORES
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define WHITE "\033[97m"
#define LIGHT_YELLOW "\033[93m"
#define LIGHT_CYAN "\033[96m"
#define LIGHT_GREEN "\033[92m"
#define LIGHT_MAGENTA "\033[95m"

//--
using namespace std;

int main()
{
    int suma = 0, cantNrosIngresados = 0;

    while(suma < 50 && cantNrosIngresados < 10){

        int nroIngresado;

        cout << LIGHT_YELLOW << "Por favor ingrese un número: " << RESET << endl;
        cin >> nroIngresado;

        cantNrosIngresados++;
        suma += nroIngresado;
    }

    cout << LIGHT_GREEN << "La suma de todos los números ingresados es " << suma << RESET << endl;

    return 0;
}