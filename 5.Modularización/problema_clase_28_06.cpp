#include <iostream> 

/**
 * EJERCICIO
 * 
 * Crea una función que identifique si un año es bisiesto.
 * 
 * -Nota: un año es bisiesto si es divisible por 4 y no lo es por 100.
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

// Prototipo de función
bool comprobarAnioBisiesto(int);

// COUT STD::
using namespace std;

int main(){

    int anioIngresado;

    cout << LIGHT_YELLOW << "Ingrese el año a comprobar: " << RESET << endl;
    cin >> anioIngresado;
    
    bool resultadoComprobacion = comprobarAnioBisiesto(anioIngresado);

    if(resultadoComprobacion){
        cout << GREEN << "El año SÍ es bisiesto." << RESET << endl;
    } else {
        cout << RED << "El año NO es bisiesto." << RESET << endl;
    }

    return 0;
}

/**
 * @brief Comprueba si un año es bisiesto.
 * 
 * Esta función recibe un año como parámetro y verifica si es bisiesto.
 * 
 * @param anio El año a comprobar.
 * @return @c true si el año es bisiesto, @c false si no lo es.
 */
bool comprobarAnioBisiesto(int anio){

    bool resultado;

    if((anio%4 == 0) && (anio%100 != 0)){
        resultado = true;
    } else {
        resultado = false;
    }

    return resultado;
}