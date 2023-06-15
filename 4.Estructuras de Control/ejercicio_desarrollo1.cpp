#include <iostream>
#include <vector>

/** EJERCICIO DE DESARROLLO 1
*
* Desarrolle un programa en el que se le exige al usuario ingresar un número mayor a 0 y muestre todos sus divisores.
*
**/

// COLORES
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define WHITE       "\033[97m"
#define LIGHT_YELLOW   "\033[93m"
#define LIGHT_CYAN  "\033[96m"
#define LIGHT_GREEN   "\033[92m"
#define LIGHT_MAGENTA "\033[95m"

// Declaración del Prototipo de la función
void obtenerDivisores(int numero);

using namespace std;

int main()
{

    double numeroIngresado;
    bool salir = false;

    while (!salir){

        cout << LIGHT_MAGENTA << "Ingrese un número mayor a 0 para mostrar divisores (-1 para terminar): " << RESET << endl;
        cin >> numeroIngresado;

        if(numeroIngresado > 0){
            obtenerDivisores(numeroIngresado);
        } else{
            salir = true;
        }
    }

    return 0;
}


void obtenerDivisores(int numero){
    int divisores = 0;

    vector<int> listaDivisores = {};

    for(int i = 1; i <= numero; i++){

        if((numero % i) == 0){
            divisores++;
            listaDivisores.push_back(i);
        }

    }

    cout << LIGHT_GREEN << "El número tiene " << divisores << " divisores." << RESET << endl;

    cout << LIGHT_YELLOW << "Los divisores de " << numero << " son: " << RESET;
    for(int divisor : listaDivisores)
    {
        cout << GREEN <<  divisor << LIGHT_YELLOW << "| ";
    }
    cout << RESET << endl;
}
