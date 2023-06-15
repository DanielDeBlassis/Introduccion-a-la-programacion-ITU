#include <iostream>

/** ESTRUCTURAS DE CONTROL - EJERCICIO DESARROLLO #4
*
* Leer una secuencia de números y mostrar la suma de los pares y el producto de los que son múltiplo de 5. 
* El programa termina cuando se ingresa 0.
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

    bool salir = false;
    int sumaPares = 0;
    double productoMultiplo5 = 1;


    while(!salir){
        
        int nroIngresado;

        cout << LIGHT_YELLOW << "Ingrese un número (0 para salir): " << RESET << endl;
        cin >> nroIngresado;

        if(nroIngresado != 0){
            if(nroIngresado % 2 == 0){
                sumaPares += nroIngresado;
            }
            if(nroIngresado % 5 == 0){
                productoMultiplo5 *= nroIngresado;
            }
        }else {
            salir = true;
        }

    }

    cout << LIGHT_GREEN << "La suma de los números pares es " << sumaPares << RESET << endl;
    cout << GREEN << "El producto de los números múltiplo de 5 es " << productoMultiplo5 << RESET << endl;

    return 0;
}