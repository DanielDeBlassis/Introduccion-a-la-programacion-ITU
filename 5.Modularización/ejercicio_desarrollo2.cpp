#include <iostream>
#include <sstream>

/**
 * MODULARIZACIÓN - EJERCICIO DESARROLLO #2
 *
 * Desarrolle un programa en el que se define una variable
 * constante declarada con un valor entero positivo, se la
 * pase por parámetro a una función y en ella se debe obtener
 * la suma de los números pares comprendidos entre 1 y el
 * numero recibido por parámetro. Muestre la suma obtenida.
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

// Prototipos de función
void informarUsuario();
int obtenerSumaNrosPares(int);
void imprimirResultado(int, int);
void imprimirError();

//--
using namespace std;

int main()
{
    int nroIngresado = 0;
    int totalSuma;

    while (nroIngresado == 0)
    {
        informarUsuario();
        string input;

        cout << LIGHT_YELLOW << "================================================================================================" << endl;
        cout << "Ingrese un número entero positivo: " << RESET << endl;

        getline(cin, input);
        istringstream iss(input);

        if (iss >> nroIngresado && nroIngresado > 0)
        {
            const int NUMERO_INGRESADO = nroIngresado;
            totalSuma = obtenerSumaNrosPares(NUMERO_INGRESADO);
        }
        else
        {
            imprimirError();
        }
    }

    if (nroIngresado)
    {
        imprimirResultado(totalSuma, nroIngresado);
    }

    return 0;
}

/**
 * IMPRIME MENSAJE INFORMATIVO PARA EL USUARIO
 * Aclara al usuario la función del programa y el intérvalo de números que puede ingresar.
 */
void informarUsuario()
{
    cout << LIGHT_MAGENTA << "================================================================================================" << endl;
    cout << "\t\t\t\t\t   INFORMACIÓN " << endl;
    cout << "================================================================================================" << endl;
    cout << LIGHT_MAGENTA << "-Este programa calcula la suma de los números pares entre 1\n y el número entero positivo que ingrese a continuación..." << RESET << endl;
    cout << LIGHT_MAGENTA << "================================================================================================" << endl;
}

/**
 * OBTENER SUMA DE NÚMEROS PARES
 * Obtiene la suma de los números pares desde 1 al número ingresado por el usuario
 * @param numeroIngresadoUsuario correspondiente al número entero positivo ingresado por el usuario.
 * @return resultado de la suma total de los números pares comprendidos en el intérvalo.
 */
int obtenerSumaNrosPares(int numeroIngresadoUsuario)
{
    int resultado = 0;

    for (int i = 1; i <= numeroIngresadoUsuario; i++)
    {
        if ((i % 2) == 0)
        {
            resultado += i;
        }
    }

    return resultado;
}

/**
 * IMPRIMIR RESULTADO
 * Imprime el resultado de la suma de los números pares, para que sea más visible para el usuario.
 * @param resultadoTotal resultado obtenido por la función para obtener suma total de números pares.
 * @param numeroIngresadoUsuario correspondiente al número entero positivo ingresado por el usuario.
 */
void imprimirResultado(int resultadoTotal, int numeroIngresadoUsuario)
{
    cout << LIGHT_GREEN << "================================================================================================" << endl;
    cout << "\t\t\t\t\t   RESULTADO " << endl;
    cout << "================================================================================================" << endl;
    cout << LIGHT_GREEN << "-El resultado total de la suma de los números pares comprendidos entre " << LIGHT_MAGENTA << " 1 " << LIGHT_GREEN << " y " << LIGHT_CYAN << numeroIngresadoUsuario << LIGHT_GREEN << " es de: " << LIGHT_YELLOW << resultadoTotal << LIGHT_GREEN << endl;
    cout << "================================================================================================" << RESET << endl;
}

/**
 * IMPRIMIR MENSAJE DE ERROR
 * Imprime un mensaje de error de una forma más visible para el usuario.
 */
void imprimirError()
{
    cout << RED << "================================================================================================" << endl;
    cout << "\t\t\t\t\t   ERROR " << endl;
    cout << "================================================================================================" << endl;
    cout << "-Ingrese un número válido mayor a 0!" << endl;
    cout << "================================================================================================" << RESET << endl;
}