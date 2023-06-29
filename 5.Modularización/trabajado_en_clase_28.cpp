#include <iostream> 

/**
 * EJERCICIO
 * Asignar valores a variables por referencia.
 * 
*/

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

// COUT STD::
using namespace std;

// Prototipo de función
void ingresaDatos(int*, int*, int*, int*);

int main(){

    int num1, num2, num3, num4;

    ingresaDatos(&num1, &num2, &num3, &num4);

    cout << LIGHT_YELLOW << "Usted ingresó los números: " << GREEN << num1 << " " << num2 << " " << num3 << " " << num4 << RESET << endl;

    return 0;
}


/**
 * @brief Toma datos del usuario.
 * 
 * Esta función recibe cuatro variables por referencia y les asigna el valor ingresado por el usuario.
 * 
 * @param num1 Puntero a entero correspondiente a uno de los cuatro números a ingresar por el usuario.
 * @param num2 Puntero a entero correspondiente a uno de los cuatro números a ingresar por el usuario.
 * @param num3 Puntero a entero correspondiente a uno de los cuatro números a ingresar por el usuario.
 * @param num4 Puntero a entero correspondiente a uno de los cuatro números a ingresar por el usuario.
 */
void ingresaDatos(int* num1, int* num2, int* num3, int* num4){
    
    int cantNumeros = 4;

    while(cantNumeros != 0){

        cout << LIGHT_YELLOW << "Ingrese un número (faltan " << GREEN << cantNumeros << LIGHT_YELLOW << "): " << RESET << endl;
        
        int input;

        cin >> input;

        switch(cantNumeros){
            case 4:
                *num1 = input;
                cantNumeros--;
                break;
            case 3:
                *num2 = input;
                cantNumeros--;
                break;
            case 2:
                *num3 = input;
                cantNumeros--;
                break;
            case 1:
                *num4 = input;
                cantNumeros--;
                break;
        }
    }
}