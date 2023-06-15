#include <iostream>

/** ESTRUCTURAS DE CONTROL - EJERCICIO DESARROLLO #3
*
* Escriba un programa que permita ingresar 10 números, ninguno de ellos igual 
* a cero. Se pide sumar los positivos mayores a 20, obtener el producto de los 
* menores a 20 y luego mostrar ambos resultados.
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

    int intentos = 0;

    int productoPositivosMenor20 = 1;
    int sumaPositivosMayor20 = 0;

    while(intentos < 10){

        int nroIngresado;

        cout << LIGHT_YELLOW << "Ingrese un número entero mayor a 0 (cero): " << RESET << endl;
        cin >> nroIngresado;

        if(nroIngresado != 0){
            
            if(nroIngresado < 20){
                productoPositivosMenor20 *= nroIngresado;
            }

            if(nroIngresado > 20){
                sumaPositivosMayor20 += nroIngresado;
            }

            intentos++;

        } else {
            cout << RED << "ERROR: Ingrese un número entero distinto a 0 (cero)." << RESET << endl;
        }

    }

    cout << LIGHT_GREEN << "El producto de los enteros positivos menores a 20 es " << productoPositivosMenor20 << RESET << endl;
    cout << GREEN << "La suma de todos los enteros positivos mayores a 20 es " << sumaPositivosMayor20 << RESET << endl;

    return 0;
}